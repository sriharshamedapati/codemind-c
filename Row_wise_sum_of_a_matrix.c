#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
            sum+=A[i][j];
        }
        printf("%d ",sum);
    }
    return 0;
}