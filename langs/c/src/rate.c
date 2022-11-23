#include <stdio.h>


int main() {

float rate,r;


	printf("What is you interest rate? \n"); 
	scanf("%f",&r);

	rate = (( r / 100) / 12);

	printf("You interest rate is per month is: %.3f\n", rate);

	return 0;
}
