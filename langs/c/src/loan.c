/* Write a program that calculates the remaining balance on a loan
 * after the first, secound, and third monthly payments:
 *
 * Expected output
 *
 * Enter amount of loan: 2000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 * Balance remaining after first payment:  $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment:  $19135.71
 */

#include <stdio.h>

int main(void){

float a, r, p;

	printf("Enter amount of Loan: \n");
	scanf("%f",&a);
	printf("Enter interest rate: \n");
        scanf("%f",&r);
	printf("Enter monthly payment: \n");
	scanf("%f",&p);
	
	 /* (a - p + (((r / 100) / 12) * a)) */
        float b = ( a - p + ((( r / 100) / 12) * a));
	float b2 = ( b - p + ((( r / 100) / 12) * b));
	float b3 = ( b2 - p + ((( r / 100) / 12) * b2));

        printf("Balance remaining after first payment: %.2f\n", b);
	printf("Balance remaining after secound payment: %.2f\n", b2);
	printf("Balance reamining after thrid payment: %.2f\n", b3);
	return 0;        
}	
	

