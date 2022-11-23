#include <stdio.h>

int main(){ 

int xval, equat;

	printf("What is the value of x?");
	scanf("%d", &xval);

	equat = (3 * xval * xval * xval * xval * xval) + (2 * xval * xval * xval * xval) - (5 * xval * xval * xval) - (xval * xval) - (7 * xval) - 6;
	
	printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 - 7x - 6, when x is equal to: %d is: %d\n",xval,equat);
	return 0;
}
