#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int even_index_place;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            even_index_place=i;
        }
    }
    printf("%d",even_index_place);
    return 0;
}