#include <stdio.h>

int main(){

	int X1, X2;
	
	
	printf("Input first Integer:\n");
	scanf("%d", &X1);
	
	printf("Input second Integer:\n");
	scanf("%d",&X2);
	
	if (X1 == X2) {
		printf("The two integers are equal");
	}
	else {
		printf("The two integers are not equal!");
	}
	
	return 0;
}
