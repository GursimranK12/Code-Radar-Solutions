#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative");
    }
    else if(n>0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }
}