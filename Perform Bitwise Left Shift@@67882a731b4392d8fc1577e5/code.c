#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%u %u",&a,&b);
    printf("%u",a<<b);

    return 0;
}