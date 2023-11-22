#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
           printf("%d ",x); 
        }
        if(x==0){
            x=1;
        }else{
            x=0;
        }
        printf("
");
    }
    return 0;
}