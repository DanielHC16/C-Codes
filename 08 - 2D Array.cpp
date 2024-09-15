#include <stdio.h>

int main() {
    int numbers[3][5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter Integer Value for Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &numbers[i][j]);
        }
    }

    // Displaying the entered values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}

