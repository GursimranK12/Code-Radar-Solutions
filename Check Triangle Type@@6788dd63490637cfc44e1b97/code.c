#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a ,&b ,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b && a!=0){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}