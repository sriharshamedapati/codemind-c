#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],avg=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        avg+=A[i];
    }
    avg/=n;
    int flag=0;
    for(int i=0;i<n;i++){
        if(A[i]==avg){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("True");
    }else{
        printf("False");
    }
}