/* Chapter 5: Programming Project 9
 *
 * Write a program that prompts the user to enter two dates and 
 * then indicates which date comes earlier on the calendar: 
 *
 * Enter the first date (mm/dd/yy):   3/6/08
 * Enter the second date (mm/dd/yy): 5/17/07
 * 
 * Result: 
 * 5/17/07 is earlier then 3/6/08 
 *
 *
 */ 
#include <stdio.h> 
#include <time.h>

int main(void){
	time_t s; 
        struct tm* ct;
        s = time(NULL);                 /* returns the current calendar time (seconds since Jan 1, 1970) */ 
       	ct = localtime(&s);	
        /* First date */
	int d = 0, m = 0, y = 0;
        /* Second date */
	int dd = 0, mm = 0, yy = 0;

	printf("Current year = %d\n",ct->tm_year + 1900);
	printf("Enter the first date (dd/mm/yy):");
		scanf("%2d/%2d/%2d",&d,&m,&y);
	printf("Enter the second date (dd/mm/yy:");
	        scanf("%2d/%2d/%2d",&dd,&mm,&yy);


	if ( yy > y )
		printf("\n%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",d,m,y,dd,mm,yy); 
        else 
                printf("\n%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",dd,mm,yy,d,m,y);

	return 0;
}
