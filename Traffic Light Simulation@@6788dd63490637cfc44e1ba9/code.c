#include<stdio.h>
int main(){
    char light;
    scanf("%d",&light);
    switch(light){
        case 'R': 
        printf("stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("slow Down");
        break;
        default:
        printf("Invalid input");
        break;
    }
    return 0;
}