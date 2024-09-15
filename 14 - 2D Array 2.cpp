#include <stdio.h>

int main() {
    int rows, cols;

    // Get the size of the 2D array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the 2D array with the user-specified size
    int userMatrix[rows][cols];

    // Get values for the 2D array from the user
    printf("Enter %d x %d elements for the 2D array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &userMatrix[i][j]);
        }
    }

    // Display the entered 2D array
    printf("Entered 2D array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", userMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
