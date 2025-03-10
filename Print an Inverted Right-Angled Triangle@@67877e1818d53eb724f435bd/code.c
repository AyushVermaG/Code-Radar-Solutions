#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=k-i;j>0j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}