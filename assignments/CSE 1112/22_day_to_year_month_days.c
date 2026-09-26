#include <stdio.h>

int main() {
    int totalDays, year, month, day;

    printf("Enter number of days: ");
    scanf("%d", &totalDays);

    year = totalDays / 365;
    totalDays = totalDays % 365;

    month = totalDays / 30;
    day = totalDays % 30;

    printf("%d years, %d months, %d days\n", year, month, day);

    return 0;
}
