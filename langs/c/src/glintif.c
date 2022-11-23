/* Write a program that finds the largest and smallest digits entered by the user
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 *
 * Use as few if statements as possible.
 */
#include <stdio.h>

int main(void){ 

	int o,t,h,f;
	
	printf("Enter four integers: \n");
	scanf("%d%d%d%d",&o,&t,&h,&f); 

	int d,i,c,e,l,s; 
	if (o > t){
		d = o; 
		i = t;
	}else{
		d = t;
		i = o; 
	}
	if( h > f) {
		c = h;
		e = f;
	}else{
		c = f;
		e = h; 
	}
	if( d > c){
		l = d;
	}else{
		l = c;
	} 
	if(i < e ){
		s = i;
	}else{
		s = e; 
	}
		printf("Larger number: %d\n", l);
		printf("Smaller number: %d\n", s);
	return 0;	
}
