#include <stdio.h>
int main(){
    int x,sum,n1=0,n2=1,n3;
    scanf("%d",&x);
    printf("%d %d ",n1,n2);
    int i;
    for(i=0;i<=x;i++){
          n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d ",n3);



    }





  return 0;
}
