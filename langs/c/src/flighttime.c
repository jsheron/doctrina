/* The following table shows the daily flights from one city to another: 
 *  	
 *  	Departure time: 	Arrival time
 *  	8:00    a.m.	         10:16 a.m.
 *  	9:43    a.m.		 11:52 a.m.
 *  	11:19   a.m.		  1:31 p.m.
 *  	12:47   p.m.		  3:00 p.m.
 *  	2:00    p.m.		  4:08 p.m.
 *  	3:45    p.m.		  5:55 p.m.
 *  	7:00    p.m.		  9:20 p.m.
 *  	9:45    p.m.		 11:58 p.m. 
 *
 * Write a program that asks the user to enter a time ( expressed in hours and minutes 
 * using the 24-hour clock). The program then displays the departure and arrival times
 * for the flight whose departure time is closest to the entered by the user:
 * 
 * Expected output: 
 * ------------------------------------------------------------------------------------
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 * -------------------------------------------------------------------------
 * notes: 
 *
 * [1] Convert hours to minutes; 
 * 	hh * 60 + m; 
 * 
 * [2] Convert minutes to hours; 
 *
 *           t  
 *      ------------- = q hours : r minutes
 *          60 
 *
 * [4] Minutes in 24 hour period: 1440 
 *     Time | Minutes since 00:00
 *   -------+-------------------------------
 *     0800 | 480
 *          +-------= 51.5 
 *     0943 | 583 
 *          +-------= 60
 *     1160 | 703
 *          +-------= 32
 *     1247 | 767 
 *          +-------= 36.5
 *     1400 | 840
 *          +-------= 52.5
 *     1545 | 945 
 *          +-------= 97.5
 *     1900 | 1140
 *          +-------= 82.5
 *     2145 | 1305
 */ 
#include <stdio.h>

int main(void){
		int h = 0, m = 0, c = 60; 

			printf("Enter a 24-hour time:\n"); 
			scanf("%d:%d",&h,&m);

          	int t = ( h * c ) + m; 			/* [1] */    

		if ( t <= 531 ) 
 			printf("Closest departure time is, 8:00 a.m.  arriving at 10:16 a.m.\n");
		else if ( t <= 643 ) 
			printf("Closest departure time is, 9:43 a.m.  arriving at 11:52 a.m.\n");
		else if ( t <= 735 )
 			printf("Closest departure time is, 11:19 a.m. arriving at 1:31 p.m.\n");
		else if ( t <= 803 )
			printf("Closest departure time is, 12:47 p.m. arriving at 3:00 p.m.\n");
		else if ( t <= 892 )
	                printf("Closest departure time is, 2:00 p.m.  arriving at 4:08 p.m.\n");
		else if ( t <= 1042 )
			printf("Closest departure time is, 3:45 p.m.  arriving at 5:55 p.m.\n");
		else if ( t <= 1222 ) 
			printf("Closest departure time is, 7:00 p.m.  arriving at 9:20 p.m.\n");
		else if ( t <= 1305 )
			printf("Closest departure time is, 9:45 p.m.  arriving at 11:58 p.m.\n");
		else 
			printf("Incorrect flight time specified or none available\n");		
	return 0;
}
