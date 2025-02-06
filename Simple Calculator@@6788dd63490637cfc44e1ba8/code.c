#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    char opp;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&opp);
    if (opp == '+'){
        printf("%d",num1+num2);
    }
    else if(opp == '-'){
        printf("%d",num1-num2);
    }
    else if(opp == '*'){
        printf("%d",num1*num2);
    }
    else if(opp == '/'){
        printf("%d",num1/num2);
    }
    else{
        printf("Error");
    }
    return 0;
}