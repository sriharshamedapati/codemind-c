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
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum += A[j][i];
        }
        printf("%d ",sum);
    }
    return 0;
}