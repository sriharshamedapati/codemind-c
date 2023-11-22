#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=64+n;
    for(int i=1;i<=n;i++){
        char character=(char)num;
        for(int j=1;j<=i;j++){
            printf("%c ",character);
        }
        num--;
        printf("
");
    }
    return 0;
}