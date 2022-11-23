#include <stdio.h>


/* Description */ 
/* Write a program that asks the user to enter a two-digit number
 * then prints the number with its digits reversed. A session 
 * with the program should have the following appearence: 
 *
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. If 
 * n is an integer, the n % 10 is the last digit in n and n / 10
 * is n with the last digit removed. 
 */

int main(void){

/* Declare and int vars */ 

int n = 0;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	int f = ( n / 10); 
	int s = ( n % 10);

	printf("The reversal is : %d%d\n",s,f);
}
