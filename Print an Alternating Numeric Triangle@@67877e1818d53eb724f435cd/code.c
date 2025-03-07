#include <stdio.h>
int main(){
    int n;
    int num =1;
    int num2 = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",num);
            if(j%2==0){
                printf("%d",num2);
            }
            else{printf("%d",num);}
        }
        printf("\n");
    }
}