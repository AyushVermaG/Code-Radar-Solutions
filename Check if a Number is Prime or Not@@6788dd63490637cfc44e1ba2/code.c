#include <stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    if(a==2 || a==1 ){printf("Prime");}
    else{
        for(b=2;b<=a/2;b++){
            if(a%b==0){
                printf("Not Prime");
                break;
            }
            else{
                c+=1;
            }
        if(c==((a/2)-1)){
            printf("Prime");
        }
        }    
        }
    return 0;
}