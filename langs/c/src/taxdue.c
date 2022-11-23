/* In one state, single residents are subject to the following income
 * tax:
 *
 * Income ($)           Amount of Tax
 * Not over 750         1% of income
 * 750   - 2,250        $7.50    +   0.02 of amount over $750
 * 2,250 - 3,750        $37.50   +   0.03 of amount over $2,250
 * 3,750 - 5,250        $82.50   +   0.04 of amount over $3,750
 * 5,250 - 7,000        $142.50  +   0.05 of amount over $5,250
 * Over    7,000        $230.00  +   0.06 of amount over $7,000
 *
 * Write a program that asks the user to enter the amount of taxable
 * income, then displays the tax due.
 *
*/
#include <stdio.h> 

int main(void){

	int la = 30; 
	float t = 0, x = 0, d = 0,r = 0;

	printf("\nEnter the amount of income you earned this year:$ ");
	scanf("%f",&x);

	if ( x >= 750.00) {
		d = 7.50;
		r = (0.02 * x );
	}else if ( x >= 2250.00 ) {
		d = 37.50; 
		r = ( 0.03 * x );
	}else if ( x >= 3750.00 ) {
		d = 82.50;
		r = ( 0.04 * x );
	}else if ( x >= 5250 ) { 
		d = 142.50;
		r = ( 0.05 * x );
	}else if ( x > 7000.00 ) {
		d = 230.00;
		r = ( 0.06 * x );
	}else{
		d = x; 
		r = ( 0.01 * x );
		t = d + r; 
		printf("\n-|Amounts shown dollars ($)\n +-\033[%db\n", la);
		printf("-|Total income made %13.2f\n +-\033[%db\n-|Taxes due for income made: %4.2f\n +-\033[%db\n-|Combined Total %16.2f\n\n",x,la,r,la,t);
	}
	
return 0; 

}
