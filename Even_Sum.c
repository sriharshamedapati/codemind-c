#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],even_sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0){
            even_sum+=A[i];
        }
    }
    printf("%d",even_sum);
    
    return 0;
}