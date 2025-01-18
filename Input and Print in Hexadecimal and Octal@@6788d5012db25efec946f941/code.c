#include <stdio.h>

void function1(int n){
    int octalNUM[100];
    int i = 0;
    while (n!=0){
        octalNUM[i] = i % 8;
        n = n / 8;
        i++;

    }
    for (j = i-1;j>=0;j--)
    printf("Otal: %d",j);
}
int main(){
    scanf("%d",n);
    printf("Hexadecimal: %X",n);
    function(n);
    return 0;
    
}