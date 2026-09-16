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
     float oishifar,oishikel;
        oishifar=(x*9+160)/5;
        printf("Celcius:%f\n",x);
        printf("Farenheit:%f\n",oishifar);
        oishikel=(x+273);
        printf("Kelvin:%f",oishikel);
    }
       else if(a==2){
     float oishicel,oishikel;
        
           oishicel=(x*5-160)/9;
        printf("Farenheit:%f\n",x);
        printf("Celcius:%f\n",oishicel);
        oishikel=((5*x-160)/9)+273;
        printf("Kelvin:%f",oishikel);
    }
       else if (a==3){
     float oishicel,oishifar;
        oishicel=(x*5-1638)/5;
        printf("Kelvin:%f\n",x);
        printf("Celcius:%f\n",oishicel);
        oishifar=(9*x-2297)/5;
        printf("Farenheit:%f",oishifar);
    } 
    
    
    

    return 0;
}
