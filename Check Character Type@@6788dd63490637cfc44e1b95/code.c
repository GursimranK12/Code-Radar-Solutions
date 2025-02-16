#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        char toupper = ch;
        if(ch=='A' || ch=='I' || ch=='E' || ch=='O' || ch=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }

    }
    else if(isdigit){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}