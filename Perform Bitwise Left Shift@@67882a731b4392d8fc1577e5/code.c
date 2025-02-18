#include<stdio.h>
int main(){
    int n,shift,out;
    scanf("%d %d",&n,&shift);
    out=n<<shift;
    printf("%d",out);
    return 0;
}