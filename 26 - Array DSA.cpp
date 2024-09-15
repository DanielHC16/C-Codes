#include <stdio.h>

int main(){
	int array[] = {2, 1, 5, 6, 1, 41, 24};
	int size = sizeof(array) / sizeof(array[0]);
	int minVal = array[0];
	int highVal = array[0];
	
	
	for (int i = 0; i < size; i++){
		if (array[i] < minVal){
			minVal = array[i];
		}
	}

	
	printf("Lowest Value: %d\n", minVal);
	printf("Highest Value: %d\n", highVal);
	
	return 0;
}
