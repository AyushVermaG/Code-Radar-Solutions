#include <stdio.h>
int main(){
    int i,j;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        for(j=j;j<=1;j++){
            printf("*");
        }
        printf("/n");
    }
    return 0;
}