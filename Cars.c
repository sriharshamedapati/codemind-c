#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",x%4==0?x/4:x/4+1);
    return 0;
}