#include <stdio.h>
#include <math.h>
int main() {
 float a,b,c,d,CI;
     printf("enter principle,rate,time: ");
    scanf("%f%f%f",&a,&b,&c);
    d=a * pow((1+b/100),c);
    CI=d-a;
    printf("compound interest :%f",CI);
    
    
    
    return 0;
}
