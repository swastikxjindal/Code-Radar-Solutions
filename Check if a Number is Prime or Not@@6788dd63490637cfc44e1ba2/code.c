#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int isPrime(int num){

}

int main() {

    int num;
    scanf("%d",&num);
    int f =0;
    for(int i =1 , i<=num, i++){
        if(num%i==0){
            f++;
        }
    }
    if(f==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}