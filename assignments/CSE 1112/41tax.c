#include <stdio.h>

int main() {
    float salary, tax;

    printf("Enter annual salary: ");
    scanf("%f", &salary);

    if (salary <= 250000)
        tax = 0;
    else if (salary <= 500000)
        tax = (salary - 250000) * 0.05;
    else if (salary <= 1000000)
        tax = 12500 + (salary - 500000) * 0.20;
    else
        tax = 112500 + (salary - 1000000) * 0.30;

    printf("Income Tax = %.2f\n", tax);

    return 0;
}
