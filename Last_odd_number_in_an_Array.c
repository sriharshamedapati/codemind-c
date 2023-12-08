#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],odd_num;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            odd_num=A[i];
        }
    }
    printf("%d",odd_num);
    return 0;
}