#include <stdio.h>
void main(){
    int s,c;
    scanf("%d %d",&s ,&c);
    if(c>s){
        printf("Profit");
    }
    else if(s>c){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}