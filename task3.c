#include <stdio.h>

int main() {
    int num;
    float mean = 0;
    int max, min;

    printf("Enter the number of cities: ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++) {
        printf("Enter the population of city %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < num; i++) {
        mean += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Mean population: %.2f\n", mean / num);
    printf("Maximum population: %d\n", max);
    printf("Minimum population: %d\n", min);

    return 0;
}

