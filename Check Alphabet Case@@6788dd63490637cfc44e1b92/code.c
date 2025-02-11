#include <stdio.h>

int main() {
    char y;
    scanf("%c",&y);
    if(y>=A && y<=Z)
    {printf("Uppercase");}
    else if(y>=a && y<=z)
    {printf("Lowercase");}
    else{printf("Not an alphabet");}
    return 0;
}