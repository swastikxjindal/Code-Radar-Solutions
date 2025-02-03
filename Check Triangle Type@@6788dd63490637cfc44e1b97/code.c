#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b==c){
        printf("Equilateral");
    }
    else if((a==b)!c || (b==c)!a || (a==c)!b){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}