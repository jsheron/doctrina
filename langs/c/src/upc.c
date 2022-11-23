#include <stdio.h>

int main(void){

/* Rules for calculating the UPC check digit
 *  Add the first, third, fifth, seventh, ninth, and elventh digits.
 *  Add the secound, fourth, sixth, eighth, and tenth digits
 *  Mulyiply the first sum by 3 and add it to the second sum.
 *  Subtract 1 from the total.
 *  Compute the remainder when the adjusted total is divided by 10.
 *  Subtract the remainder from 9.
 */

int d = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0,
        first_sum = 0, second_sum = 0, total = 0;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d); 
	printf("Enter the first group of five digits: "); 
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter the second group of five digits: "); 
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5); 


	first_sum = d + i2 + i4 + j1 + j3 + j5; 
	second_sum = i1 + i3 + i5 + j2 + j4; 
	total = 3 * first_sum + second_sum; 

	printf("Check digit: %d\n", 9 - (( total - 1 ) % 10 )); 

	return 0;
}

