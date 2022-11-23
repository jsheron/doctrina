/* Write a program that formats product information entered by the user. A session 
 * with the program should look like this: 
 *
 * Enter item number: 583 
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 * Item		Unit	Purchase
 * 		Price	date 
 * 583		$ 13.50 10/24/2010
 */

#include <stdio.h>

int main(void){
int i = 0, d = 0, m = 0, y = 0;
float p = 0;

	printf("Enter item number:");
	scanf("%d", &i);
	printf("Enter unit price:");
	scanf("%f", &p);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%2d/%4d",&m, &d, &y);

	printf("\nItem\t\tUnit\t\tPurchase\t\t\n\t\tPrice\t\tDate\n%d\t\t$%-4.2f\t\t%d/%02d/%d\n", i, p, m, d, y);
	return 0; 
}


