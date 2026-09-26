// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int n,hour,minutes,second;
    scanf("%d",&n);
    hour=n/3600;
    minutes=(n%3600)/60;
    second=(n%3600)%60;
    printf("%d hour %d minutes %d second",hour,minutes,second);
   
             
    return 0;
}3
