#include <stdio.h>
int main(){
    int n;
    int num=65;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j =1;j<=i;j++){
            printf("%d",64+num);
        }
    }
}