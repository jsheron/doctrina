#include <stdio.h>
#include <time.h>
#define FUTURE 2037

int main(void){

        int f = 0;
        time_t n; 
        // Get current time; time() get the current time at runtime. 
        time(&n);
        struct tm *l = localtime(&n);
        // All this just to get the current year. 
        int y = l->tm_year + 1900;
        printf("How old are you today?\n");
        scanf("%d",&f);

        // Okay get the difference ie 2037 - 2022
        int d = FUTURE - y;
        // ohh magic C code "How old will I be in 2037"  
        int s = d + f; 

        printf("You will be %d in 2037\n", s);
        return 0;

}
