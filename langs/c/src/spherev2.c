#define _GNU_SOURCE 

#include <stdio.h>
#include <math.h>

#define RAD 10
// #define M_PI 3.14159265358979323846f

int main (void) {
/* Lets comput the value of a sphere with a radius
 * of 10 meters via the formula v = 4/3TTr^3
*/

	float vol; 
	vol = (4.0f / 3.0f) * M_PI * (RAD * RAD * RAD);

	printf("The volume of the sphere is: %.10f\n", vol);

	return 0;
}
