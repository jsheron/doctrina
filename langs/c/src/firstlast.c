// Write a program that asks the user for their first and 
// last name. Then, have the program output both names on 
// one line, in the format last, first. 
//
// On the next line, output the number of characters in each name.  
// For example, if Benedict Cumberbatch used this program the 
// output would be:
//
// Cumberbatch, Benedict
// 11, 8

#include <stdio.h>
#include <string.h>


char fname[10], lname[10];


int main(void){

	printf("Hi what is your first name?\n-> ");
	scanf("%s", fname);
        printf("Well nice to bloody meet ya %s, what is your last name?\n-> ", fname);
        scanf("%s", lname);

	int lfname = strlen(fname);
        int llname = strlen(lname);

	printf("\n+ Results are in +\n-\033[%db\n",16);
	printf("+-> %s, %s\n", lname, fname);
	printf("+-> %d, %d\n", llname, lfname);

	return 0;
}
