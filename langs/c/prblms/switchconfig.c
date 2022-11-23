#include <arpa/inet.h>
#include <sys/socket.h>   
#include <netdb.h>  
#include <stdio.h>  
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>
#include <stdarg.h>
#include <errno.h>

#ifndef   NI_MAXHOST
	#define   NI_MAXHOST 1025
#endif

/* an_im_dead() is Variadic function: to sound a fancy
 * a variadic function is one of indefinite "arity". 
 * printf is effectively equivalent
 */ 

void an_im_dead(const char *fmt, ...);

#define TCPBUFF 4096
#define TCPPORT 80
#define sa struct sockaddr

int main(void)
{

/* Okay workflow for this binary
 * 1.) A record lookup for host.example.com
 * 2.) Once we get the ipv4 address then use TCP to connect 
       and pull down image payload. 
 *  TODO: Figure out how to store payload and then exec it within
          ONIE to install the image. 
 */

    int g = 0;
    struct addrinfo hints, *res, *result;
    char hbuf[NI_MAXHOST], repo[] = "ahost.domain.com";
    memset(&hints, 0, sizeof hints);
    hints.ai_family = PF_UNSPEC;      // reallllllyy dont want have to recompile this, for IPv6 support.
    hints.ai_socktype = SOCK_DGRAM;   // UDP Socket for dns lookup of host git.host.com
    hints.ai_flags = 0;               // No flags are needed here 
    hints.ai_protocol = 0;            // Any protocol 

    /* Okay now on to the "fun" stuff
       getaddrinfo() is a linked list that identifies a *node* and a *service* 
       goal here is to maintain portability relative to usage and keeping 
       our anchor points external.
       Sooo noww we.......
     */ 
      g = getaddrinfo(repo,NULL,&hints,&result);
     /* 
	Okayyyy lets make sure that didn't barf
      */
      if( g != 0 ) {
	   fprintf(stderr,"Okay something is broken: %s\n", gai_strerror(g));
	   exit(EXIT_FAILURE);
      }
       /* 
         NOOOOWWWWWW we need to iterate the linked list 
         of wonderful address structures
       */
       for (res = result; res; res = res->ai_next) {
       /* 
         This was annoying to figure out but anyhow
	 we use getnameinfo() to convert res->ai_addr to
	 a string ANNNNNDDDDDD THEN use NI_NUMERICHOST to present
	 ONLY THE NUMERIC ADDRESS AND THEN STOP!!! 
        */
	   g = getnameinfo(res->ai_addr,res->ai_addrlen, hbuf, sizeof hbuf, NULL, 0, NI_NUMERICHOST); 
        /* 
          Check for vomit 
         */
   	   if (g != 0){
	         fprintf(stderr,"%s\n", gai_strerror(g));
	      }

      }
      freeaddrinfo(result); 
      
      printf("DEBUG: %s\n",hbuf); /* for debugging want to make sure result is correct
                            * This is removed in prod version for obvious reasons
                            */ 

      // Cool now onto the the TCP side of this!! 
      int        sockfd, n;    
      int        sendbytes;
      char       sendline[TCPBUFF], recvline[TCPBUFF];
      struct     sockaddr_in servaddr;
      
      if ( (sockfd = socket(AF_INET, SOCK_STREAM,0)) < 0)
		an_im_dead("oh god, the socket just barfed\n");
	
        memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(TCPPORT);  /* host to network short; ie big-endian, little-endian */ 
	
        if(inet_pton(AF_INET, hbuf, &servaddr.sin_addr) <= 0)
		an_im_dead("and I died at line %d\n",81);
	
	if(connect(sockfd, (sa *) &servaddr, sizeof(servaddr)) < 0)
		an_im_dead("and I died at line %d, call to connect() barfed\n",84);
	
        // Pull from a gitlab API
	sprintf(sendline, 
		"GET /api/v4/projects/<project-id>/repository/files/somewhere%2Fover%2Fthe%2Frainbow.txt HTTP/1.1\r\n"
		"Host: %s\r\n"
		"Accept: */*\r\n\r\n", repo); 

	sendbytes = strlen(sendline);
	
	if(write(sockfd, sendline, sendbytes) != sendbytes)
		an_im_dead("write error\n");
	
	memset(recvline, 0, TCPBUFF);
	while ( (n = read(sockfd, recvline, TCPBUFF-1)) > 0) {
		printf("%s",recvline);
	}
	
	if(n<0)
		an_im_dead("read error");
	
	exit(0);
        /* Still have much more to do with this currently taking calculus and many other 
         * brain hurting courses, I will work on this more when I have time.
         */
}

void an_im_dead(const char *fmt, ...){

	int errno_save;
	va_list ap;
	errno_save = errno;
	
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	fprintf(stdout, "\n");
	fflush(stdout);
	
	if(errno_save != 0)
	{
		fprintf(stdout, "(error = %d) : %s\n", errno_save,
		strerror(errno_save));
		fprintf(stdout,"\n");
		fflush(stdout);
	}
	va_end(ap);

	exit(1);
}
