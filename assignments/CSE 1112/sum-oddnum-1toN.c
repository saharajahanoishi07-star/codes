#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}

