#include<stdio.h>
void main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}