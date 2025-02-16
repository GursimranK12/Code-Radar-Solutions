#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        printf("In Range\n");
    }
    else{
        printf("Out Of Range\n");
    }
}