#define N 4
#include <stdio.h> 

int main(void){

	int a[N],s,l; 
	
        printf("Enter four integers: \n");
	for(int i = 0; i < N; ++i){
	  scanf("%d",&a[i]);
	}

	l=s=a[0];

	for(int i = 1; i < N; i++){
	printf("BEGIN loop %d\n",i);
	printf("L = %d S = %d a[0] = %d\n",l,s,a[0]);
	   if(a[i] < s){
		printf("\ta[%d] %d < %d s\n",i,a[i],s);
		printf("\tS is %d\n",s);
		s = a[i];
		printf("\tS is now = %d\n",s); 
	   }
	   if( a[i] > l ){
		printf("\ta[%d] %d < %d s\n",i,a[i],l);
		printf("\tL is %d\n",l); 
		l = a[i];
		printf("\tL is now = %d\n",l);
	   }
	printf("END LOOP %d\n",i); 
       }
		printf("larger number: %d\n",l);		  	
		printf("Smaller number: %d\n",s);		  


return 0; 

}
