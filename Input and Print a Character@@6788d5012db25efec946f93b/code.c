#include <stdio.h>

char fxn() {
    char a;
    scanf("%s",&a);
    printf("You entered: %s",a)
}

int main() {
    printf("%s", fxn());
    return 0;
}