#include <stdio.h>
#include <ctype.h>
void main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        ch = toupper(ch);
        if(ch=='A || ch=='E || ch=='I' || ch=='0' || ch=='U'){
            printf("Vowels\n");
        }
        else{
            printf("Consonants\n");
        }
    }
    else if(isdigit(ch)){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }

}