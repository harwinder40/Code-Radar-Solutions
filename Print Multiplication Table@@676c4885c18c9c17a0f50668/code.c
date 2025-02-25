#include<stdio.h>
int main(){
    int n,i,product;
    scanf("%d",&n);
    product=1;
    for(i=1;i<=10;i++){
       
        printf("%d x %d = %d",n,i,n*i);
    }
}