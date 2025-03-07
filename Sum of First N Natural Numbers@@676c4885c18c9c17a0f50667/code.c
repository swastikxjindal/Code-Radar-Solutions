#include <stdio.h>
int main(){
    int n;
    int sum=0;
    while(n>=0){
        sum = sum+n;
        sum++;
    }
    printf("%d",sum);
    return 0;

}