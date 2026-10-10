// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int N,M,sum=0;
    scanf("%d",&N);
    scanf("%d",&M);
   for(int i=1;i<=N;i++){
    sum=M*i;
        printf("%d ",sum);
       }
   
    
    return 0;
}
