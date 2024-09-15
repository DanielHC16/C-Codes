#include <stdio.h>

int main(){
	int arr[10];
	int i, searchVal;
	int firstOccur = -1, lastOccur = -1;
	
	printf("Enter 10 Integer Values: \n ");
	for (i = 0; i < 10; i++){
		printf("Integer Value No. %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter Integer Value to be searched -> ");
	scanf("%d", &searchVal);
	
	for (i = 0; i < 10; i++){
		if (arr[i] == searchVal){
			if (firstOccur == -1){
				firstOccur = i;
			}
			lastOccur = i;
		}
	}
	
	if (firstOccur == -1 ){
		printf("Integer Value to be searched is non-existing!!\n");
	} else {
		printf("The First Occurence of No. %d is in Array Index %d\n", searchVal, firstOccur);
		printf("The Last Occurence of No. %d is in Array Index %d\n", searchVal, lastOccur);
	}
	
	return 0;
	
}
