

#include <stdio.h>

int main() {
    int n, digit, number = 0;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        number = number * 10 + digit;
       n=n/10;
    }

    printf("%d", number);

    return 0;
}
