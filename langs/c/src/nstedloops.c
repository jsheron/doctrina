#include <stdio.h>

#define XAXIS 1
#define YAXIS 7

int main(void){   
 	for ( int x = 0; x < XAXIS; x++ ){  
	  for ( int y = 1; y < YAXIS; y++ ){ 
	       printf("B\033[%db\n", YAXIS-y);
	}
    }
    return 0;
}
