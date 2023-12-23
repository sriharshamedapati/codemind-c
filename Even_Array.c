#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],flag=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2!=0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}