//MP6 - Write a program to test if a non-negative integer is prime or not
// A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. In other words, a prime number has only two distinct positive divisors: 1 and itself.
#include <stdio.h>

int is_prime(int n){
	if (n <= 1) {
		return 0;
	}
	
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	int X;
	
	printf("Enter non-negative integer --> ");
	scanf("%d", &X);
	
	if (is_prime(X)){
		printf("%d is a prime number\n", X);
		
	} else {
		printf("%d is not a prime number\n", X);
	}
	
	return 0;
}

