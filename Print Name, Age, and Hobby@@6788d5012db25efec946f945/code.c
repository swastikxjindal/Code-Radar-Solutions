#include <stdio.h>

int main(){
    char name[30];
    int age;
    char hobby[30];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;

}