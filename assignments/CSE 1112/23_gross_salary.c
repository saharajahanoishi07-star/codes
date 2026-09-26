#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;   // 20% HRA
    da  = basic * 0.10;   // 10% DA

    gross = basic + hra + da;

    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
