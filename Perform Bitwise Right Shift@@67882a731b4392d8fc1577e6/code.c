#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%u",a>>b);
    return 0;
}