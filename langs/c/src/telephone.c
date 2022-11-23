/* Write a program that prompts the user to enter the user to enter a telephone 
 * number in the the form (xxx) xxx-xxxx and then displays the number in the 
 * form xxx.xxx.xxx 
 *
 * Expected output:
 * 
 * Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 * You entered -> 404.817.6900
 */
#include <stdio.h> 

int main(void){

int a = 0, p = 0, ln = 0;

	printf("Give me them digits [(xxx) xxx-xxxx]: ");
	scanf("(%3d) %3d-%04d", &a, &p, &ln); 

	printf("You entered -> %3d.%3d.%04d\nYour area code is -> %3d\nYour prefix is -> %3d\nYour Line number is -> %04d\n", a, p ,ln, a, p, ln); 
	return 0; 
}
