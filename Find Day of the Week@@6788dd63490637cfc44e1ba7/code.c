#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int day;
    scanf("%d",&day);
    switch(day>=1 && day<=7){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thrusday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

    return 0;
}