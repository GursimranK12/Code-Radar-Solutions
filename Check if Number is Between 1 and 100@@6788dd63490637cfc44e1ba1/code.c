#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n) != 1){
        return 1;
    }
    if(n>=1 && n<=100){
        printf("In Range\n");
    } else{
        printf("Out Of Range\n");
    }
    return 0;
}