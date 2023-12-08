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
    int x,y,sum;
    scanf("%d %d",&x,&y);
    int B[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&B[i][j]);
            sum=A[i][j]+B[i][j];
            printf("%d ",sum);
        }
        printf("
");
    }
    return 0;
}