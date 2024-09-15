#include <stdio.h>

int main() {
	int prev2 = 0, prev1 = 1;
	int newFibo;
	int maxFibo;
	int fiboCount = 2;
	
	
	printf("Input Maximum Fibonacci Sequence N -> ");
	scanf("%d", &maxFibo);
	
	printf("#1 Term -> %d\n", prev2);
	printf("#2 Term -> %d\n", prev1);
	
	for (int fibo = 0, fiboCount; fibo < maxFibo; fibo++, fiboCount++){
		newFibo = prev1 + prev2;
		printf("#%d Term -> %d\n", fiboCount + 2, newFibo);
		prev2 = prev1;
		prev1 = newFibo;
	}
	
	return 0;
}
