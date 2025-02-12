#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}