#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=2){
	    printf("The pattern is not possible");
	}else{
	for(int i=1;i<=2*n-1;i++){
		if(i<=n){
			for(int j=1;j<=i;j++){
				printf("*");
			}
			printf("
");
		}else{
			for(int j=1;j<=2*n-i;j++){
				printf("*");
			}
			printf("
");
		}
	}
	}
	return 0;
}