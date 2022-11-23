#include <stdio.h>

/* 
 * 4. Write a program that reads an integer 
 * entered by the user and displays it in octal
 * (base 8): 
 *
 * Enter a number between 0 and 32767: 1953
 * In octal, you number is: 03641
 *
 * The output should be displayed using five digits, 
 * even if fewer digits are sufficient. 
 */
int main(void){
	int n = 0;
	printf("Enter a number between 0 and 32767:\n");
	scanf("%d", &n); 

	printf("In octal, your number is: %05o\n", n);
	return 0; 
}

