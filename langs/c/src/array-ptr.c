#include <stdio.h>

int main(void) {
	int v = 2, bank[5], *ptr = bank; //&bank[0]
	
	for( ; ptr < &bank[5]; ptr++ ){
		*ptr = v; 
                 v = v * 2; 
        }
 	for( int i = 0;i < 5; i++ ){
		printf("%d\n", bank[i]);
	}
}
