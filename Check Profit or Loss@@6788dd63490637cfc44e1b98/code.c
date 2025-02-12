#include <stdio.h>
void main(){
    int s,c;
    scanf("%d %d",&s ,&c);
    if(s>c){
        printf("Profit");
    }
    else if(c>s){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}