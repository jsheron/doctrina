/* Chapter 5: Programming Projects
 * ---------------------------------
 *
 * 2. Write a program that asks the user for a 24-hour time, then displays the time
 *    in 12-hour form:
 *
 *    Enter a 24-hour time: 21:11
 *    Equivalent 12-hour time: 9:11 PM
 *
 * ---------------------------------------------------------------------------------
 * Be carefull not to display 12:00 as 0:00
 */
#include <stdio.h>
#define MID 00
#define BFN 11
#define AFN 12

int main(void){

	int h = 0, m = 0; 

               printf("Enter a 24-hour time (HH:MM): ");
	       scanf("%2d:%2d", &h, &m);

	int p = ( h - 12 ); /* for post meridiem */ 

		if ( h == MID ){ 
			printf("Equivalent 12-hour time: %2d:%02d AM\n", p, m );
		}
		else if ( h <= BFN ){
			printf("Equivalent 12-hour time: %2d:%02d AM\n", h, m );
		}
		else if ( h == AFN ){
			printf("Equivalent 12-hour time: %2d:%02d PM\n", h, m);
		}
		else if ( h > AFN ){
			printf("Equivalent 12-hour time: %2d:%02d PM\n", p, m );
		}
	return 0; 
}
