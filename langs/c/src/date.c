/* Write a program that accepts a date from the user 
 * in the form mm/dd/yyyy and then displays it in the form yyyymmdd
 *
 * Expected output: 
 *
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered date 20110217
 */

#include <stdio.h>

int main(void){

int d = 0, m = 0, y = 0; 

	printf("Enter a date (mm/dd/yyyy): "); 
	scanf("%d/%2d/%4d", &m, &d, &y);

	printf("You entered the date %d%02d%d\n\n", y, m, d);

	return 0; 

}
	
	

