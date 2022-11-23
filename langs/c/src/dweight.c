#include <stdio.h>

int main(void)
	{
	int height, length, width, volume, weight; 

	height = 8;
	length = 10;
	width = 12;
	volume = height * length * width; 
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
	}

	
