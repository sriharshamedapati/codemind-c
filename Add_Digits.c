#include<stdio.h>
int sum_of_digits(int i){
    int j=i,sum=0;
    while(j>0){
        sum+=j%10;
        j/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d ",&n);
    int i=n;
    while(i>10){
        i=sum_of_digits(i);
    }
    printf("%d",i);
}