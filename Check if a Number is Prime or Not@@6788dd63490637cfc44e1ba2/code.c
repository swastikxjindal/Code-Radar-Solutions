#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num>1 && num%1==0){
        printf("Prime")
    }
    else{
        printf("Not Prime")
    }
    return 0;
}