// Your code here...
#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num, &n);
    int bit = (num>>n) & 1;
    printf("%d",bit);
    return 0;
}