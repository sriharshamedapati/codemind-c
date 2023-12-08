#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],odd_sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            odd_sum+=A[i];
        }
    }
    printf("%d",odd_sum);
    
    return 0;
}