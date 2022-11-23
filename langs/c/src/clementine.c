#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <error.h>

void clementine(int x, int y, char c){
	// build the rows
	for(int i = 1; i <= x; i++){
	   // build the columns
	   for(int h = 1; h <= y; h++){
	      // print whatever char we got on  
              // stdin
	      printf("%c",c);
        }
          printf("\n");
     }	
}

int main(int argc, char **argv){
        // check to make sure we got at least three input args
        if( argc < 3 ){
                printf("Error need 2 integers and one character from ya bud\n");
                exit(EXIT_FAILURE);
        }
        // Test if argv[1] & argv[2] are ints, if not report error and exit;
        for(int x = 1; x <= 2; x++){
                if(isdigit(*argv[x]) == 0){
                        printf("Error:  Input argument at index %d is not an integer!\n\tSaw %s but expected an integer!\n",x,argv[x]);
                        exit(EXIT_FAILURE);
                }
        }
        // Test if argv[3] is a char;
                if( isalpha(argv[3][0]) == 0){
                        printf("Error third input argument is not a character!\n");
                        exit(EXIT_FAILURE);
        }
        // no testing is done convert char* from argv
        // to ints for vars n and o. 

	int  n = atoi(argv[1]);
	int  o = atoi(argv[2]);
	char p = argv[3][0];
        
        // not really needed function pointers are fun.
	void (*clem) (int, int, char) = clementine;
	clem(n,o,p);

	return 0;
}

