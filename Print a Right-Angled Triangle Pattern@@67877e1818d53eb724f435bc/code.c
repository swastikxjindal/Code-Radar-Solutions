#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=a; i>0;i++)
        for (int j = i; j<i;j++){
            printf("* ");
        }
        printf("\n");
    return 0;
}