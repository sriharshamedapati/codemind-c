#include<stdio.h>
int main(){
    int n,num=65;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char character = (char) num;
            printf("%c ",character);
            num++;
        }
        num=65;
        printf("\n");
    }
    return 0;
}
