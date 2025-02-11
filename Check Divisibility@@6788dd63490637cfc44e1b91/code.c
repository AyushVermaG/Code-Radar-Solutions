#include <stdio.h>

int main() {
    int y;
    scanf("%d",&y);
    if ((y%5==0 && y%11==0))
    {printf("Divisible");}
    else{printf("Not Divisible");}
    return 0;
}