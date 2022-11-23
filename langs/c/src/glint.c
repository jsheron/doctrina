/* Write a program that finds the largest and smallest digits entered by the user
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 *
 * Use as few if statements as possible.
 */

#include <stdio.h>

int main(void){ 

	int o,t,h,f;
	
	printf("Enter four integers: \n");
	scanf("%d%d%d%d",&o,&t,&h,&f); 

	int l = o, s = o; 
			   
 	(void) ((t < s) && (s = t));
        (void) ((h < s) && (s = h));
	(void) ((f < s) && (s = f));

	(void) ((t > l) && (l = t));
	(void) ((h > l) && (l = h));
	(void) ((f > l) && (l = f));


	printf("Larger number: %d\n", l);
	printf("Smaller number: %d\n", s);

	return 0;	
}
