#include <stdio.h>
#include <ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    if (isalpha(c)){
        if(x=='a' && x=='e' && x=='i' && x=='o' && x=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant")
        }
    }
    else if(isdigit(x)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}