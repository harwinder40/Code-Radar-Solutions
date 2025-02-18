#include<stdio.h>
int main(){
    unsigned int n;
    scanf("%u",&n);
    if(n&(1U<<31)) printf("Set");
    else printf("Not Set");

}