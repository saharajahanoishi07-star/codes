#include <stdio.h>

int main() {
 int a,b,x;
    printf("a,b :");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    
    printf("a:%d b:%d",a,b);
    
    return 0;
}
