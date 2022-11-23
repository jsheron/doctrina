#include <stdio.h>
#include <stdlib.h>
#define VALUE 212



void merganser(int a){
    int result = 0; 
    printf("I passed an integer %d and computed it to be %d from the cmdline to a function, yay!\n",a,result = a * VALUE);
}
int main(int argc, char **argv){
    
     if(argc <=1 ){
       printf("Usage: %s <number>\n", argv[0]);
       exit(1);
     }
     int f = atoi(argv[1]);  
     void (*merg_ptr)(int) = merganser; 

     merg_ptr(f);
  
     return 0;

    
}
