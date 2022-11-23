#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void lollygag(double c, double d){
     if( c == 0 || d == 0){
         printf("%0.1f\n",-1.0);
         exit(1);
       }
       printf("Quotient of %0.2f divided by %0.2f is: %0.2f\n", c, d, c / d);
}

int main(int argc, char **argv){
    if(argc <=2){
       printf("Usage: %s\n Divides two decimal numbers\n", argv[0]);
       exit(1);
    }
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    
    /*            double trouble             */
    void (*polly ) (double, double) = lollygag;
    
    polly(a,b);

    return 0;
}

