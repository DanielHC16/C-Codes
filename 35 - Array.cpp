#include <stdio.h>

int main(){
	
	int arrSize;
	int arrCount;

	
	printf("Input Array Size -> ");
	scanf("%d", &arrSize);
	printf("\n");
	
	int arr[arrSize];
	int minVal;
	int highVal;
	
	printf("Input Array Value #1 -> ");
	scanf("%d", &arr[0]);
	minVal = arr[0];
	highVal = arr[0];
	
	for (int i = 1, arrCount = 0; i < arrSize; i++, arrCount++){ //Array Creation
		printf("Input Array Value #%d -> ", arrCount + 2);
		scanf("%d", &arr[i]);
	
	}
	
	printf("Completed Array: "); 
	for (int k = 0; k < arrSize; k++){ //Displays Array
	printf("%d ", arr[k]);
	}
	
	for (int j = 0; j < arrSize; j++){ //Lowest Value
		if(arr[j] < minVal){
			minVal = arr[j];
		}
	}
	
	for (int jj = 0; jj < arrSize; jj++){ //Highest Value
		if(arr[jj] > highVal){
			highVal = arr[jj];
		}
	}
	
	
	
	int bub = arrSize; // Bubble Sort
	for (int n = 0; n < bub-1; n++){ // Outer loop iterates each element of the arr
    	for (int m = 0; m < bub-n-1; m++ ){ // Inner loop to compare succeeding elements
        	if (arr[m] > arr[m + 1]){ // check if current element is > than next
            	int temp = arr[m]; //temp variable to store current element
           		arr[m] = arr[m + 1]; // Swap current element with next element
            	arr[m + 1] = temp; // Assign temp to next element
        	}
    	}
	}
	
	printf("\nLowest value: %d", minVal);
	printf("\nHighest value: %d", highVal);
	
	printf("\nBubble Sorted Array: "); //Bubble sort
		for (int b = 0; b < bub; b++){
			printf("%d ", arr[b]);
		}
	
		
	
	
}
