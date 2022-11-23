#define _GNU_SOURCE


#define RAD 10
#define NUM 4.0f
#define DEM 3.0f

#include <stdio.h>
#include <math.h> 



/* Cool use for learning purposes, but bad. value of pi already
 * defined in #include <math.h>. Don't want to remove this  
 * but will just comment out, and #define and include appropiate
 * sources.
 * 
 * double PI()
 * {
 *	double i = 0.0;
 *      double pi = 1.5;
 *
 *	for(i = 10; i >= 1; i--)
 *		{
 *		  pi = i/(i*2+1)*pi+1; 
 *		}
 *		pi *= 2.0;
 *	printf("The value of pie(TT) = %.10f\n", pi);
 *	return pi;	
 * }
 */

int main () 
{
	double vol = 0.0;
	vol = (NUM / DEM) * M_PI * (RAD * RAD * RAD);

	printf("The volume of the facking sphere is: %.10f\n", vol);
	
	return 0;

}
