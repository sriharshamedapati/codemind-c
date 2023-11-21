#include<stdio.h>
int main(){
    int n,num=65;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char character = (char) num;
        for(int j=1;j<=n;j++){
            printf("%c ",character);
        }
        num++;
        printf("
");
    }
    return 0;
}