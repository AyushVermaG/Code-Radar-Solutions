#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x+y>z && z+y>x  && x+z>y)
    {printf("Valid");}
    else{printf("Invalid");}
    return 0;
}