#include <stdio.h> 

/* Write a program that asks the user to enter a U.S dollar amount 
 * and then shows how to pay that amount using the smallest number
 * of $20, $15, $10, $5, and $1 bills:
 *
*/

int main(){
	int num; 
	
		printf("Enter a dollar amount: \n------------------\n");
		if((scanf("%d", &num) && ( num > 0))){
			int demon[] = { 20, 15, 10, 5, 1};

			size_t i; 

			for ( i = 0; i != sizeof(demon)/ sizeof(int); ++i)
			{
  			 int n = num/demon[i];
			 
			 if (n != 0){
				printf("$%d bills: %d\n", demon[i],n);
				num %= demon[i];
				}
			}
		}
}

