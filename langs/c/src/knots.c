/* Chapter 5: Programming Project 6
 * ------------------------------------
 * Description: 
 *
 * 4 ] Write a program that asks the user to enter a wind speed ( in knots )
 *     then display the corresponding description. 
 *
 *     Speed ( knots ) 		Description
 *     < = 1 			Calm
 *     1 - 3 			Light Air
 *     4 - 27 			Breeze
 *     28 - 47 			Gale
 *     48 - 63 			Storm
 *     Above 63 		Hurricane
 */ 


#include <stdio.h>

int main(void){

	int kn = 0; 
	printf("Enter the speed in knots: \n");
	scanf("%d", &kn);

	if ( kn <  1  )
		printf("Calm\n");
	else if ( kn <= 3 )
		printf("Light Air\n");		
	else if ( kn <= 27 )
		printf("Breeze\n");
	else if ( kn <= 47 )
		printf("Gale\n");
	else if ( kn <= 63 )
		printf("Storm\n");
	else if ( kn > 63 )
		printf("Hurricane\n");
	else 
		printf("I am not sure I understood the inputted windspeed\n");
	return 0;
}
