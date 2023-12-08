#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int minimum=A[0];
    for(int i=0;i<n;i++){
        if(A[i]<minimum){
            minimum=A[i];
        }
    }
    printf("%d",minimum);
    
    return 0;
}