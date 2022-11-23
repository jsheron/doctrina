/* Programming Project
 * Chapter 5 Problem 6
 *
 * Modify the upc.c program of section 4.1 
 * so tht it checks whether a UPC is valid 
 * After the user enters a UPC, the program
 *
 * Return should show VALID or NOT VAlID *
 *
 */
#include <stdio.h> 

int main(void){

	/* Even number */ 
	int a = 0, c = 0, e = 0, g = 0,i = 0,k = 0;

	/* Odd Numbers */ 
	int b = 0,d = 0,f = 0,h = 0,j = 0,l = 0;

	printf("->|Enter all 12 digits of the UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

	int fset = a + c + e + g + i + k;
	int sset = b + d + f + h + j;
	
	int fsum = fset * 3 + sset - 1;
	int rem  = fsum % 10; 
	int equa = 9 - rem; 

		if ( equa == l){
			printf("VALID\n");
		}
		else {
			printf("NOT VALID\n");
		}

	return 0;
}
