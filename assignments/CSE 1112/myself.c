include <stdio.h>

int main() {
    char name[50], dep[50], university[100];
    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your department name: ");
    scanf("%s",dep);

    printf("Enter your university name: ");
    scanf("%s",university);

    printf("My name is %s, my department name is %s and my univesity name is %s university\n",name,dep,university);
    
    return 0;
}
