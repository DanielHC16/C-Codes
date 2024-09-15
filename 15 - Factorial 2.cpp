//Write a program that calculates the factorial of a non-negative integer entered by the user. 

#include <stdio.h>

int main(){
	
	int number;
	unsigned long long factorial = 1;
	
	printf("Please enter a non-negative number\n");
	scanf("%d", &number);
	if (number <0) {
		printf("Please enter a valid number");
		return (1);
	}
	
	for(int i = 1; i <= number; ++i){
		factorial *= i;
	}	
	
	printf("The factorial of %d is %llu\n", number, factorial);
	
	return(0);
}
