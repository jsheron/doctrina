#include <stdio.h>
/* Description  
 * -----------------------------------------------------------------
 * Write a program that asks the user to enter a two-digit number
 * then prints the number with its digits reversed. A session 
 * with the program should have the following appearence: 
 *
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. If 
 * n is an integer, the n % 10 is the last digit in n and n / 10
 * is n with the last digit removed. 
 *
 * Expand this program to include three-digit numbers
 */

int main(void){
int n = 0;
printf("Enter a two-digit or three-digit number: ");
scanf("%d", &n);

	if(( n < 10 ) || ( n > 999 )){
		printf("-------------------------------------\nError! integer value %d is not supported ONLY positive integers that are two or three digits are applicable\n", n); 
	return 1;
	}
	if ( n <= 99){
	int v = 0, w = 0, r = 0;
		v = ( n / 10);
		w = ( n % 10); 
		r = ( 10 * w) + v;

	printf("The reversal of %02d is : %02d\n", n, r);
		}	 

	if ( n >= 100){
	int x = 0, y = 0, z = 0, r = 0;
		x = (n / 100); 
		y = ((n % 100) / 10);
		z = (n%10);
		r = 100 * z + 10 * y  + x;
	
	printf("The reversal of %03d is: %03d\n", n,r);
		}
return 0; 
}
