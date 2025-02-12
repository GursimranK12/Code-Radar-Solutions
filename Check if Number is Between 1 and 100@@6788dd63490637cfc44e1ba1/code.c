#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n<=100 && n<=1){
        printf("In Range");
    }
    else{
        printf("Out Of Range");
    }
}