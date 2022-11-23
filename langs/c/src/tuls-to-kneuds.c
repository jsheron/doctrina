// write a program in C program that converts tulfors to kneuds 
//
// Conversion factor: 1 tulfor is equal to 3.94 kneuds. 
//

#include <stdio.h>
#include <unistd.h> 

#define XCHNGE 3.94
#define ONEHUNDIGITSOFPI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067

int main(void){
    float n = 0;
          printf("Enter a length in tulfors:  \n");
          scanf("%f", &n);
    float cf = n * XCHNGE;
          printf("\nComputing.......\n");
          sleep(ONEHUNDIGITSOFPI);
          printf("\n%.*f tulfor(s) is equal to %.*f kneuds.\n",2,n,2,cf);
    return 0;
 }
