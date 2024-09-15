#include <stdio.h>


int binarySearch(int arr[], int length, int target) {
    int left = 0;          
    int right = length - 1; 

    // Loop until the left pointer is less than or equal to the right pointer
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index to avoid overflow

        // If the target is found at the middle index, return the index
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is less than the middle element, search in the left half
        if (target < arr[mid]) {
            right = mid - 1;
        } else {
            // If the target is greater than the middle element, search in the right half
            left = mid + 1;
        }
    }

    
    return -1;
}

int main() {
    
    int arr[] = {12, 16, 24, 32, 38};  
    int target; 

  
    printf("Existing Array = [12, 16, 24, 32, 38]\n");


    printf("Input target value -> ");
    scanf("%d", &target);

  
    int length = sizeof(arr) / sizeof(arr[0]);

  
    int result = binarySearch(arr, length, target);

    
    if (result != -1) {
        printf("Target Value Found!\n");
        printf("Target: %d Found at Index: %d\n", target, result);
    } else {
        
        printf("Target value not found in the array.\n");
    }

    return 0;
}


