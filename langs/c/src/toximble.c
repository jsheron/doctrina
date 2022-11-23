#include <stdio.h>
#include <unistd.h>

// 1. A new polygon called the toximble has been discovered and you've been hired 
// to write a program to help calculate the area of one. The area of a toximble 
// is defined as (side1 x 3.87) + (side2 x 2.29). Design, code, and test a program 
// that asks the user to enter values for side 1 and side 2 of a toximble. Be sure 
// to accept floating point values and also be sure to prompt the user for each input. 
// Calculate and display the area of the toximble to two decimal places.

#define SIDEN 3.87
#define SIDET 2.29

int main(void){

   float n =0 ,t = 0;
   printf("\n\t Toximble: Area calculator\n+-\033[%db+\n",45);
   printf("Please enter the measurement of the first side:\n-> ");
   scanf("%f",&n);

   printf("Please enter the measurement of the second side:\n-> ");
   scanf("%f",&t);

   printf("\n\nThinking really hard to calculate the area of a toximble....\n");

   // totally not needed, but slows things down a little
   sleep(2);

   float x = n * SIDEN;
   float y = t * SIDET;

   float area = x + y; 

   printf("The total area of this toximble is %.*f square units\n",2,area);

   return 0;
}
