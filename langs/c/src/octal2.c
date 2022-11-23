#include <stdio.h>

int main(void){

  int on = 0, dn= 0 , ex = 1; 

	printf("Enter a number between 0 and 32767:\n");
	scanf("%d", &dn);

	while (dn != 0){
    		on += (dn % 8) * ex;
    		dn /= 8;
        	ex *= 10;
    	}

	printf("Octal value is: %05d\n", on);

	return 0;

}

