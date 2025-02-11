#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char a[100];
    char b[100];
    scanf("%d",&n);
    scanf("%s %s",&a ,&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",n);
    printf("Hobby: %s",b);
    return 0;
}