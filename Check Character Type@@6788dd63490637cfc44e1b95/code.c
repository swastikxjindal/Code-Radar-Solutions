#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='a' && x=='e' && x=='i' && x=='o' && x=='u'){
        printf("Vowel");
    }
    else if(int(x)){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
}