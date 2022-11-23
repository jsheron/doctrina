/* Descrition 
 *
 * When stocks are sold or purchased through a broker, the broker's commision
 * is often computed using a sliding scale that depends upon the value of the stocks
 * traded. Let's say that a broker charges the amounts shown in the following table: 
 *
 * Transaction size	| Commision rate 
 * ------------------------------------------------------------
 * Under  - $2,500	| $30  + 1.7%
 * $2,500  - $6,250	| $56  + 0.66%
 * $6,250  - $20,000	| $76  + 0.34%
 * $20,000 - $50,000	| $100 + 0.22%
 * $50,000 - $500,000 	| $155 + 0.11% 
 * Over $500,000 	| $255 + 0.09%
 * ------------------------------------------------------------
 *
 * The minium charge is $39. Our next program asks the user to enter the amount of the trade
 * then displays the amount of the commission: 
 *
 * Enter the value of the trade: 30000
 * Commission: $166.00
 *
 * The heart of the program is a cascaded if statement that determines the range the trade falls 
 * into. 
 *
 * Calculates a brokers commission 
 * 
 */
#include <stdio.h>

int main(void){

float commission, value; 

	printf("Enter the value of the trade: ");
	scanf("%f", &value);

		if ( value < 2500.00f)
			commission = 30.00f   + 0.017f  * value;
		else if ( value < 6250.00f ) 
			commission = 56.00f + 0.066f  * value;
		else if ( value < 20000.00f) 
			commission = 76.00f   + 0.034f  * value;
		else if ( value < 50000.00f)
			commission = 100.00f  + 0.022f  * value;
		else if ( value < 500000.00f)
			commission = 155.00f  + 0.0011f * value;
		else 
			commission = 255.00f  + 0.0009f * value; 

		if ( commission < 39.00f )
			commission = 39.00f;

		printf("Commission: $%.2f\n", commission); 
		
		return 0; 
	}
