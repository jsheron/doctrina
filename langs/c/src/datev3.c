#include <stdio.h> 


int main(void){

	/* first date vars */ 
	int mn, dn, yn;
	/* secound date vars */ 
	int mt, dt, yt; 

	printf("Enter the first date (mm/dd/yy):\n");
	scanf("%d/%d/%d", &mn, &dn, &yn); 
	printf("Enter the secound date (mm/dd/yy):\n");
        scanf("%d/%d/%d", &mt, &dt, &yt);
	printf("\n");
     		if( yt > yn ){
			switch(mn){
				case 1:  printf("January"); 	break;
				case 2:  printf("Febuary");	break;
				case 3:  printf("March");	break;
				case 4:  printf("April");	break;
				case 5:  printf("May");		break;
				case 6:  printf("June");	break;
				case 7:  printf("July");	break;
				case 8:  printf("August"); 	break;
				case 9:  printf("September");	break;
				case 10: printf("October");	break;
				case 11: printf("November");	break;
				case 12: printf("December");	break;
			}
			printf(", %d,%02d is before ",dn,yn);
                        switch(mt){
                                case 1:  printf("January");     break;
                                case 2:  printf("Febuary");     break;
                                case 3:  printf("March");       break;  
                                case 4:  printf("April");       break;
                                case 5:  printf("May");         break;
                                case 6:  printf("June");        break;
                                case 7:  printf("July");        break;
                                case 8:  printf("August");      break;
                                case 9:  printf("September");   break;
                                case 10: printf("October");     break;
                                case 11: printf("November");    break;
                                case 12: printf("December");    break;
                        }
			printf(", %d,%d\n",dt,yt);	
		}else{
                        switch(mt){
                                case 1:  printf("January");     break;
                                case 2:  printf("Febuary");     break;
                                case 3:  printf("March");       break;
                                case 4:  printf("April");       break;
                                case 5:  printf("May");         break;
                                case 6:  printf("June");        break;
                                case 7:  printf("July");        break;
                                case 8:  printf("August");      break;
                                case 9:  printf("September");   break;
                                case 10: printf("October");     break;
                                case 11: printf("November");    break;
                                case 12: printf("December");    break;
                        }
                        printf(", %d,%02d is before ",dt,yt);
                        switch(mn){
                                case 1:  printf("January");     break;
                                case 2:  printf("Febuary");     break;
                                case 3:  printf("March");       break;
                                case 4:  printf("April");       break;
                                case 5:  printf("May");         break;
                                case 6:  printf("June");        break;
                                case 7:  printf("July");        break;
                                case 8:  printf("August");      break;
                                case 9:  printf("September");   break;
                                case 10: printf("October");     break;
                                case 11: printf("November");    break;
                                case 12: printf("December");    break;
                        }
                        printf(", %d,%02d\n",dn,yn);

		}
	return 0;
}
