#include<stdio.h>
int main(){
    int n,x=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            printf("%d ",x);
        }
        if(x==1){
            x=0;
        }else{
            x=1;
        }
        printf("
");
    }
    return 0;
}