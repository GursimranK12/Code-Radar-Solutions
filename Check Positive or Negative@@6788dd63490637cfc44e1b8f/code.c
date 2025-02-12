#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative %d",n);
    }
    else if(n>0){
        printf("Positive %d",n);
    }
    else{
        printf("Zero %d",n)
    }
}