#define N 4
#include <stdio.h> 

int main(void){

	int a[N],s,l; 
	
        printf("Enter four integers: \n");
	for(int i = 0; i < N; i++){
	  scanf("%d",&a[i]);
	}

	l=s=a[0];

	for(int i = 0; i < N; i++){
	   if(a[i] < s){
		s = a[i];
	   }
	   if( a[i] > l ){
		l = a[i];
	   }
       }
	printf("larger number: %d\n",l);
	printf("Smaller number: %d\n",s);
return 0; 
}
