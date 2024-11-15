#include <stdio.h>

int main() {
    int N, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0, count_others = 0;
    char ch;

    printf("Enter the number of characters: ");
    scanf("%d", &N);

    printf("Enter %d characters:\n", N);
    for (int i = 0; i < N; i++) {
        scanf(" %c", &ch);  // Adding a space before %c ensures we skip any whitespace/newline

        switch (ch) {
            case 'a': case 'A': count_a++; break;
            case 'e': case 'E': count_e++; break;
            case 'i': case 'I': count_i++; break;
            case 'o': case 'O': count_o++; break;
            case 'u': case 'U': count_u++; break;
            default: count_others++;
        }
    }

    printf("Frequency of a = %d\n", count_a);
    printf("Frequency of e = %d\n", count_e);
    printf("Frequency of i = %d\n", count_i);
    printf("Frequency of o = %d\n", count_o);
    printf("Frequency of u = %d\n", count_u);
    printf("Frequency of others = %d\n", count_others);

    return 0;
}

