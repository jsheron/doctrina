#include <stdio.h>

#define MAXSTR 3 
#define MAXLEN 8 

int main(void){

   char arr[MAXSTR][MAXLEN] = {"starfox", "tetris", "zelda" };

   printf("I enjoyed playing these games when I played them\n");
   for( int i=0; i < 3; i++){
      printf("-| %s\n",arr[i]);
   }
   return 0; 
}
