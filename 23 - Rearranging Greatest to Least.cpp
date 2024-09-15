#include <stdio.h>
//A code that tells which of the 3 numbers is the greatest

int main()
{
	int X1, X2, X3, temp;
	
	printf("Enter first number\n");
	scanf("%d",&X1);
	printf("Enter second number\n");
	scanf("%d",&X2);
	printf("Enter third number\n");
	scanf("%d",&X3);
	
	if (X1 >= X2 && X1 >= X3) {
		printf("The first number is greater than the second and third numbers\n");
	}
	else if (X2 >= X1 && X2 >= X3) {
		printf("The second number is greater than the second and third numbers\n");
	}
	else if (X3 >= X1 && X3 >= X2) {
		printf("The third number is greater than the second and third numbers\n");
	}
//aranging order
	if (X1 > X2) {
        temp = X1;
        X1 = X2;
        X2 = temp;
    }

    if (X2 > X3) {
    	temp= X2;
        X2 = X3; 
        X3 = temp;
    }

    if (X1 > X2) {
        temp = X1;
        X1 = X2;
        X2 = temp;
    }
    
     printf("Numbers in ascending order: %d, %d, %d\n", X1, X2, X3);
}
