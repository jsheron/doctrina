// Programming Exercise
// Write a program report to report the number of punctuation characters, 
// the number of alphabetic characters, and the number of other characters 
// read.

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main(void){
	int x = 0;
	int p = 0, a = 0, o = 0;
	while (( x = getc(stdin)) != EOF){
		if(isalpha(x)){
			a++;
		}else if(ispunct(x)){
			p++;
		}
		o++;
	}
	printf("-> Alpha characters = %d\n -> Punctuation chars found = %d\n -> Others are %d\n", a, o, p);
	return 0;
}




