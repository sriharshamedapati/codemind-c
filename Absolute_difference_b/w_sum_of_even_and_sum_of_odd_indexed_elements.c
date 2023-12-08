#include<stdio.h>
#include<math.h>
int main(){
    int n,flag=1;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int odd_index_sum=0,even_index_sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even_index_sum+=A[i];
        }else{
            odd_index_sum+=A[i];
        }
    }
    printf("%d",abs(odd_index_sum-even_index_sum));
    return 0;
}