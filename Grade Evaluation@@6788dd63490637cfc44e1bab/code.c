#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
        break;
    }
    return 0;
}