#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %d",&a ,&b ,&op);
    switch op;
    case '+':
    printf("%d\n", a+b);
    break;
    case '-':
    printf("%d\n", a-b);
    break;
    case'*':
    printf("%d\n",a*b);
    break;
    case'/':
    if(b==){
        printf("error\n");
    } 
    else{
        printf("%d\n" ,a/b);
    }
    break;
    default: printf("error\n");
    break;
return 0;
}