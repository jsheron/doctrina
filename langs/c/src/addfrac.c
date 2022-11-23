/*
 * Write a program that asks the user to enter user both
 * fractions at the same time, seperated by a plus sign: 
 * 
 *
 * Expected output: 
 * Enter two fractions seperated by a plus sign: 5/6+3/4
 * The sum is 38/24
*/

#include <stdio.h>

int main(void){

int n1 = 0, d1 = 0, n2 = 0, d2 = 0, r = 0, rd = 0; 


	printf("Enter two fractions seperated by a plus sign: \n");
	scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);
		
		r = n1 * d2 + n2 * d1; 
		rd = d1 * d2;  
	
	printf("The sum of the fraction is: %d/%d\n", r, rd);

	return 0; 

}
