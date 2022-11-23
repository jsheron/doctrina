#include <stdio.h>

#define BASEPAY 17.33
#define STDWRKWK 40
#define TIERONE 0.19
#define TIERTWO 0.25
#define TIERTHREE 0.28

int main(void){
	int ot = (BASEPAY / 2) + BASEPAY;
	double hours = 0;
	printf("How many hours did you work?\n");
	scanf("%lf", &hours);
	// ookay now that we have the hours, let do some simple
	// accounting	
	if( hours > 40){
		int lhours = hours - 40;
		int npay = STDWRKWK * BASEPAY;
		int opay = lhours * ot;
		int gpay = npay + opay;
		
                }
	}
}



