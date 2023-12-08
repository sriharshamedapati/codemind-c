#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    float avg=(float)sum/n;
    printf("%.2f",avg);
    return 0;
}