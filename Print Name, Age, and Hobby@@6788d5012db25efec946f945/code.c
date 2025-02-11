#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int n;
    char b[100];
    scanf("%s",&a);
    scanf("%d",&n);
    scanf("%s",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",n);
    printf("Hobby: %s",b);
    return 0;
}