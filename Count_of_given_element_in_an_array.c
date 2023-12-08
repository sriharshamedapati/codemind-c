#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int z;
    scanf("%d",&z);
    int count=0;
    for(int i=0;i<n;i++){
        if(z==A[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}