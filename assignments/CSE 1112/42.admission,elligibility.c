#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50)
        printf("Eligible for admission\n");
    else
        printf("Not eligible for admission\n");

    return 0;
}
