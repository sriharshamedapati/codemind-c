#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],even_index_sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(i%2==0){
            even_index_sum+=A[i];
        }
    }
    printf("%d",even_index_sum);
    
    return 0;
}