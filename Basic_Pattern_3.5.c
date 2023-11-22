#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=65;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            char character=(char)num;
            printf("%c ",character);
            num++;
        }
        num=65;
        printf("
");
    }
    return 0;
}