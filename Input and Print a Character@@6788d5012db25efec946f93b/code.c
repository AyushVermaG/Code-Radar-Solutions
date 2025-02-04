#include <stdio.h>

char* welcome() {
    char a;
    scanf("%s",&a);
    printf("You entered: %s",a)
}

int main() {
    printf("%s", welcome());
    return 0;
}