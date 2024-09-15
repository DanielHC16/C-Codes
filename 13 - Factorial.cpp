
#include <stdio.h>


int factorial (int number)
{
	int factorial = 1;
	
	for (int i = number; i > 1; i--)
	{
		factorial *= i;
	}
	
	return factorial;
}

int main()
{

	int x;

	printf("Input Integer Value:");
	scanf("%d", &x);
	
	printf("The factorial of %d is %d", x, factorial(x));

	return 0;
}


