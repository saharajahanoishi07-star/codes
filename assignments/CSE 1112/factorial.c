


#include <stdio.h>

int main() {
    int N, i;
    long long fact = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fact *= i;
    }

    printf("%lld", fact);

    return 0;
}

