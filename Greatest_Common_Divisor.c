#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i=a>b?b:a;
    while(i>0){
        if(a%i==0&&b%i==0){
            printf("%d",i);
            break;
        }
        i--;
    }
    return 0;
}