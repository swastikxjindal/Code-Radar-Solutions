#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int msb_num;
    msb_num = 1<<31;
    if (a & msb_num){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}