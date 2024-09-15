//MP 5 Compounding Interest

#include <stdio.h>

int main(){
	
	int startBal, nDays;
	float rate, finalBal, compoundingFactor=1;
	
	printf("Input Starting Balance --> ");
	scanf("%d", &startBal);
	printf("Input Annual Rate --> ");
	scanf("%f", &rate);
	rate *= 0.1; // rate = rate * 0.1 // converts to percentage
	printf("Enter Amount of Days --> ");
	scanf("%d", &nDays);
	
	int i;
	
	for (i=0;i<nDays;i++){
		compoundingFactor *= (1+(rate/365));
	}
	printf("Final Account Balance: %.2f", startBal*compoundingFactor);
	
	return 0;
}

