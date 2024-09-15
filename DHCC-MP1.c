#include <stdio.h>
#include <stdlib.h>

void displayTriangle(int size){
	int i, j;
	int startRow = (24 - size) / 2;
	int startCol = (80 - (2 * size - 1)) / 2;
	
	for (i = 0; i < startRow; i++){
		printf("\n");
	}
	
	for (i = 0; i < size; i++){
		
		for(j = 0; j < startCol + size - i - 1; j++) {
			printf(" ");
		}
		
		for (j = 0; j <= i *2; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main () {
	int size;
	
	printf("Enter triangle size [3-12] -> ");
	scanf("%d", &size);
	
	if (size < 3 || size > 12){
		printf("Invalid Size!!");
		return 1;
	}
	
	displayTriangle(size);
	
	return 0;
}


