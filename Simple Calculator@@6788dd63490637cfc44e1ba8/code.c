#include <stdio.h>
int main(){
    int a,b;
    float d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        d=a+b;
        printf("%f",d);
        break;
        case '-':
        d=a-b;
        printf("%f",d);
        break;
        case '*':
        d=a*b;
        printf("%f",d);
        break;
        case "/":
        d=a/b;
        printf("%f",d);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}