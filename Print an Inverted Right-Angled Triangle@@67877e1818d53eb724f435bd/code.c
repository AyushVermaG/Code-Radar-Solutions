#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=k-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}