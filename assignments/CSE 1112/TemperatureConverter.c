// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("1.Celcius\n");
    printf("2.Farenheit\n");
    printf("3.Kelvin\n");
    printf("4.Exit\n");
    printf("Enter your option: ");
    int a;
    scanf("%d",&a);
    float x;
    printf("Temperature: ");
    scanf("%f",&x);
    if(a==1){
     float far,kel;
        far=(x*9+160)/5;
        printf("Celcius:%f\n",x);
        printf("Farenheit:%f\n",far);
        kel=(x+273);
        printf("Kelvin:%f",kel);
    }
       else if(a==2){
     float cel,kel;
        
           cel=(x*5-160)/9;
        printf("Farenheit:%f\n",x);
        printf("Celcius:%f\n",cel);
        kel=((5*x-160)/9)+273;
        printf("Kelvin:%f",kel);
    }
       else if (a==3){
     float cel,far;
        cel=(x*5-1638)/5;
        printf("Kelvin:%f\n",x);
        printf("Celcius:%f\n",cel);
        far=(9*x-2297)/5;
        printf("Farenheit:%f",far);
    } 
    
    
    

    return 0;
}
