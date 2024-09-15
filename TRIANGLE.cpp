#include <stdio.h>

void displayTriangle(int size) {
    int i, j;
    int startRow = (24 - size) / 2;
    int startCol = 40;

    // Move cursor to the starting row
    for (i = 0; i < startRow; i++) {
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        // Move cursor to the starting column
        for (j = 0; j < startCol - i; j++) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int size;

    printf("Enter triangle size (3-12) -> ");
    scanf("%d", &size);

    if (size < 3 || size > 12) {
        printf("Invalid Size!!\n");
        return 1;
    }

    displayTriangle(size);

    return 0;
}

