#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    char opp;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&opp);
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
        printf("%d",a/b);
        break;
        default:
        {
            printf("Error")
        }

    }
    return 0;
}