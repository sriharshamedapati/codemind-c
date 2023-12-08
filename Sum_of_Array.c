#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%d",sum);
    return 0;
}