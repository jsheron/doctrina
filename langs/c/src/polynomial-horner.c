#include <stdio.h>

int main(void) {
/* (((((3x+2)x-5)x-1)x+7)x-6 */ 
	int x;
	int hrule; 

	printf("What is the value of x for the polynomial (((((3x+2)x-5)x-1)x+7)x-6? \n");
	scanf("%d", &x);
	
	hrule = ((((3 * x + 2) * x - 5) * x - 1) * x +7) * x - 6;
	
	
	printf("OUTPUT:= %d\n", hrule); 


	return 0; 

}
