#include <stdio.h>

int main() {
    int number, sum = 0;

    do {
        printf("Enter Integer Number Above 0\n");
        scanf("%d", &number);

        if (number > 0) {
            sum += number;
        }
    } while (number > 0);

    printf("The sum of all input numbers is: %d", sum);

    return 0;
}

