/* Books are identified by an international Standard Book Number (ISBN). ISBNs assigned
 * after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
 *
 * (Older ISBNs use 10 digits.) 
 *
 * The First group ( the GS1 prefix ) is currenlt either 978 or 979 
 * The group identifier specifies the language or country of origin 
 * for example, 0 and 1 are used in English-speaking countries). the publisher
 * code identifies the publisher (393 is the code for W.W. Norton). 
 *
 * The item number is assigned by the publisher to identify a specific
 * book (97950 is the code for this book). An ISBN ends with a check digit 
 * that's used to verify the accuracy of the preceding digits. 
 *
 * Write a program that breaks down an ISB Entered by the user: 
 *
 *
 * Expected output:
 *
 * Enter ISBN: 978-0-393-97950-3
 * GS1 Prefix: 978
 * Group indentifier: 0 
 * Publisher code: 393
 * Item number: 97950 
 * Check digit: 3 
 */ 

#include <stdio.h> 

int main(void){

	int gs1 = 0, gi = 0, pc = 0, in = 0, cd = 0; 
	int l = 30; 


	printf("Enter the ISBN number of the book (xxx-x-xxx-xxxx-x): ");
	scanf("%d-%d-%d-%d-%d", &gs1, &gi, &pc, &in, &cd);

	printf("\n ISBN:%d-%d-%d-%d-%d\n +-\033[%db\n", gs1, gi, pc, in, cd,l);
	printf("-> GS1 prefix: %d\n-> Group identifier: %d\n-> Publisher Code: %d\n-> Item Number: %d\n-> Check Digit: %d\n", gs1, gi, pc, in, cd);
	return 0; 
}



