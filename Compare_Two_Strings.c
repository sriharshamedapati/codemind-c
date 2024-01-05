#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100],str1[100];
    scanf("%s
%s",&str,&str1);
    if(strcmp(str,str1)==0){
        printf("Strings are Equal");
    }else{
        printf("Strings are not Equal");
    }
    return 0;
}