#include <stdio.h>

int main() {
    int n;
    scanf("%d",&d);
    for(int i=1;i<=n;i++){
        for(int j = 1; j<= n-i;j++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    
}