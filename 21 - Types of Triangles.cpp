#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input: Accept three side lengths
    printf("Enter the length of side1: ");
    scanf("%d", &side1);

    printf("Enter the length of side2: ");
    scanf("%d", &side2);

    printf("Enter the length of side3: ");
    scanf("%d", &side3);

    // Check the type of triangle
    if (side1 == side2 && side2 == side3) {
        printf("This is an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}

