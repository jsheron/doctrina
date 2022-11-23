/* Chapter 5: Programming projects 
 * Question 3
 * ------------------------
 * Modify the broker.c program by making both the following changes: 
 *
 * [1] Ask the user to enter the number of shares and the price
 *     per share, instead of the blaue of the trade. 
 *
 * [2] Add statements that compute the commission charged by a rival broker
 *     - $33 plus 0.03 cents share for fewer than 2000 shares; 
 *     - $33 plus 0.02 cents per share for 2000 shares or more
 *
 *     Display the rival's commission charged by the original broker. 
 *
 * ------------------------------------------------------------
 */
#include <stdio.h>

int main(void){

	float p=0,n=0; 

	printf("Enter the number of shares sold: \n");
	scanf("%f", &n);

	printf("Enter the price per share (0.00): \n");
	scanf("%f", &p);


	float total = ( n * p ), payout; 


		if ( total  < 2500.00f ) 
			payout =  30.00f + 0.017f * total; 
		else if ( total  < 6250.00f)
			payout = 56.00f + 0.066f * total;
		else if ( total  < 20000.00f)
			payout = 76.00f + 0.034f * total; 
		else if ( total  < 50000.00f)
			payout =  100.00f  + 0.022f * total; 
		else if ( total  < 500000.00f) 
			payout =  155.00f  + 0.0011f * total;
		else 
			payout = 255.00f + 0.0009f * total; 
		
		if ( total < 39.00f )
			payout = 39.00f; 

	float rtot = ( p * n ), rpay=0; 
	
		if ( rtot < 2000.00f ) 
			rpay = n + 0.03 * rtot; 
		else if ( rtot > 2000.00f )
			rpay = n + 0.02 * rtot; 
		
		printf("\n--------------------------------------------------------------------------------------------------\n");
		printf("Number of shares sold: %.2f\n\t|-Price per share: $%.2f\n\t|-Total Sale: $%.2f\n\t|-Commission: $%.2f\n\n", n, p, total, payout);
		printf("Rival Broker payout equivalent\n\t|-Number of shares sold: %.2f\n\t|-Price per share: $%.2f\n\t|-Toal Sale: $%.2f\n\t|-Commission: $%.2f\n\n",n, p, rtot, rpay);

	return 0;
}	
