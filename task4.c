#include <stdio.h>

int main() {
    int x, y;
    char direction;

    int min_x = 1, max_x = 4;
    int min_y = 1, max_y = 4;

    printf("Enter the initial position of the player (x y) between (1,1) and (4,4): ");
    scanf("%d %d", &x, &y);

    if (x < min_x || x > max_x || y < min_y || y > max_y) {
        printf("Error: Initial position is out of bounds.\n");
        return 1;
    }

    while (1) {
        printf("Enter direction (U for Up, D for Down, L for Left, R for Right): ");
        scanf(" %c", &direction);

        switch (direction) {
            case 'U': y--; break;
            case 'D': y++; break;
            case 'L': x--; break;
            case 'R': x++; break;
            default:
                printf("Invalid direction. Use U, D, L, or R.\n");
                continue;
        }

        if (x < min_x) {
            printf("The player has reached the boundary at (1, %d)\n", y);
            break;
        } else if (x > max_x) {
            printf("The player has reached the boundary at (4, %d)\n", y);
            break;
        } else if (y < min_y) {
            printf("The player has reached the boundary at (%d, 1)\n", x);
            break;
        } else if (y > max_y) {
            printf("The player has reached the boundary at (%d, 4)\n", x);
            break;
        }
    }

    return 0;
}

