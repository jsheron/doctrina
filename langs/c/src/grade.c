#include <stdio.h>

int main(void){


	int on=0, th=0, h = 0;

	printf("Enter numerical grade:\n"); 
	scanf("%1d%1d%1d", &on,&th,&h);

		if(h > 0){
			printf("Error not a valid entry, please enter a number 0-100\n");
		}else{
			switch(on){
				case 9: printf("Letter grade is: A\n");
				        break;
				case 8: printf("Letter grade is: B\n");
			                break;
				case 7: printf("Letter grade is: C\n");
			                break;
				case 6: printf("Letter grade is: D\n");
			                break;
				case 5: printf("Letter grade is: F\n");
			                break;	
				
			}
		}
}


