#include <stdio.h>

int main() {
    int N;
    float increment;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    printf("Numbers from %d to 0 in descending order:\n", N);
    for (int i = N; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Numbers from 1 to %d, skipping multiples of 4:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 4 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Enter an increment value (less than 1): ");
    scanf("%f", &increment);

    if (increment >= 1) {
        printf("Error: Increment must be less than 1.\n");
        return 1;
    }

    printf("Numbers from 0 to %d with increment %.2f:\n", N, increment);
    for (float i = 0; i <= N; i += increment) {
        printf("%.2f ", i);
    }
    printf("\n");

    return 0;
}

