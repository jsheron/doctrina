#include <stdio.h>
#define TAX 0.05f

int main(){

double amnt;
double tot;

	printf("Enter an amount: ");
	scanf("%le", &amnt); 

	tot = ( amnt * TAX ) + amnt; 
	printf("With TAX added, the amount is: %.2f\n", tot);
	
	return 0;
}
