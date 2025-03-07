#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        printf("%d",i);
        for(int j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}