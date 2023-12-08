#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],odd_sum,even_sum;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            odd_sum+=A[i];
        }else{
            even_sum+=A[i];
        }
    }
    printf("%d",abs(odd_sum-even_sum));
    return 0;
}