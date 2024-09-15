#include <stdio.h>

int findMax(int x, int y)
{
	return (x > y) ? x : y;
}

int main(){
	
	int x1, y1;
	
	printf("Input 2 integer values\n");
	scanf("%d%d", &x1, &y1);
	
	printf("The greater number is %d", findMax(x1, y1));
	
	return 0;
}
