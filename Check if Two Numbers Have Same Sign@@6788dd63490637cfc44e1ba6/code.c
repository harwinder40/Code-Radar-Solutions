#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>=1 && b>=1)
        printf("Same Sign");
    else if (a<=0 && b<=0)
        printf("Same sign");
    else
        printf("Different Sign");
    return 0;
}