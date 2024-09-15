#include <stdio.h>

int main(){
	
	//A code that uses for loops to take input from the user and then computes the average.
	
	int X[5];
	float avg;
	
		printf("Input 5 Numbers\n");
	for (int i = 0; i < 5; i++) {
		printf("Number #%d =>", i+1);
		scanf("%d", &X[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		avg = (X[0] + X[1] + X[2] + X[3] + X[4])/5;
	}
	
	printf("The Average of all Numbers input is: %.2f", avg);
	
	return 0;
}
