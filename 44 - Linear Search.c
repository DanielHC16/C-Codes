#include <stdio.h>

int main(){
    
    int arr[] = {32, 12, 16, 24, 38};
    int target;
    
    printf("Existing Array = [32, 12, 16, 24, 38]\n");
    printf("Input target value -> ");
    scanf("%d", &target);
    
    for(int i = 0; i < 5; i++){
        if (arr[i] == target){
            printf("Target Value Found! \n");
            printf("Target: %d Found at Index: %d\n", target, i);
            return 0;
        }
    }
   
    printf("VALUE NOT FOUND\n");
    return -1;
}

