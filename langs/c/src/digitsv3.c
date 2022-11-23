#include <stdio.h>
#define s 1 

/* Rewrite the program in Project 2  so that it prints the reversal of a three number without using 
 * arithmetic to split the number into  digits. 
 */

int main(void){

int x = 0, y = 0, z = 0; 

	printf("Enter a three digit number: \n");
	scanf("%1d%1d%1d", &x,&y,&z);

	printf("The reversal of %1d%1d%1d is %1d%1d%1d\n", x,y,z,z,y,x);    
    return 0; 
}
