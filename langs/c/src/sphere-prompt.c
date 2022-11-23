#define _GNU_SOURCE

#include <stdio.h>
#include <math.h>

/* Define variables */
#define NUM 4.0f
#define DEM 3.0f

int main (){

	int rad;
	float vol;

		/* Prompt user for radius of the sphere*/
		printf("What is the radius of the sphere?: ");
		scanf("%d", &rad);
	
		printf("Calculating the volume of the sphere");
		vol = (NUM / DEM) * M_PI * (rad * rad * rad);

		printf("The volume of the sphere is: %.10f\n", vol);

	return 0;
}
