#include <stdio.h>
int main(){
    int a,b,;
    scanf("%d %d %d ",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral");
    }
    else if(a==b && b!=c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }

    return 0;
}