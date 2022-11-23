/* Description 
 * Chapter 5 Programming Projects
 * -------------------------------------------
 *
 * 1. Write a program that calculates how many digits a number contains: 
 *
 * Enter a Number: 374
 * The number 374 has 3 digits
 *
 */
 #include <stdio.h>


int main(void){
	int num = 0;
	printf("Enter a whole number between 1 and 1000: ");
	scanf("%d", &num);

		if ( num <= 9){
			printf("Your number %1d has 1 digit\n", num);
		}
		else if ( num <= 99 ){
			printf("Your number %2d has 2 digits\n", num);
		}
		else if ( num <= 999){
			printf("Your number %3d has 3 digits\n", num);
		}
		else if ( num == 1000){
			printf("Your number %4d has four digits\n", num);
		}
		else {
			printf("\nI said a whole number between 1 and 1000!\n");
		}
	return 0; 
}
