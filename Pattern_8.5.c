#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char ch;
    for(i=0 ; i<n ; i++){
        ch=65+i;
        for(j=1 ; j<=n ; j++){
            if(j==i+1){
                printf("%c",ch);
            }else if(j==n-i){
            	printf("%c",ch);
			}else{
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}