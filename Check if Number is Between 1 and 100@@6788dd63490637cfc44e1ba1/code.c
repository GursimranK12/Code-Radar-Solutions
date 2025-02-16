#include <stdio.h>
int main(){
    int a;
    sacnf("%d",&a);
    if(a>=1 && a<=100){
        printf("In Range\n");
    } else{
        printf("Out Of Range\n");
    }
    return 0;
}