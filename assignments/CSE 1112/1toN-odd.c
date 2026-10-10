// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
   for(int i=1;i<=N;i++){
       if(i%2!=0){
           printf("%d ",i);
       }
   }
    
    return 0;
}
