#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j=n;
    for(i=0;i<n;i++){
        for(j=n-i;j<=n;j++){
            printf("%d ",j);
        }
        printf("
");
    }
    return 0;
}