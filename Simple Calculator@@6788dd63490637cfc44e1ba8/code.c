#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char opp;
    scanf("%d %d",&a,&b);
    scanf(" %c",&opp);
    switch(opp){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;
        
        case '/':
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
        break;

        default:
        printf("Invalid");
    }
    return 0;
}