#include <stdio.h>
#include <stdlib.h>

void printCenteredTriangle(int size) {
    int i, j;
    int start_row = (24 - size) / 2;
    int start_col = (80 - (2 * size - 1)) / 2;
    
    // Move cursor to the starting row
    for (i = 0; i < start_row; i++) {
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        // Print leading spaces to center the triangle horizontally
        for (j = 0; j < start_col + size - i - 1; j++) {
            printf(" ");
        }
        // Print the asterisks for the current row
        for (j = 0; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter the size of the triangle (3-12): ");
    scanf("%d", &size);
    
    if (size < 3 || size > 12) {
        printf("Size must be within the range of 3 to 12.\n");
        return 1;
    }
    
    printCenteredTriangle(size);
    
    return 0;
}

