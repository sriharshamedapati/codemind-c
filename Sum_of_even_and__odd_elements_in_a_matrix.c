#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int even_sum=0,odd_sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]%2==0){
                even_sum+=A[i][j];
            }else{
                odd_sum+=A[i][j];
            }
        }
    }
    printf("%d %d",even_sum,odd_sum);
}