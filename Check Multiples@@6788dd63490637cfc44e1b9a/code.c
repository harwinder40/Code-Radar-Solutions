#include <stdio.h>

int main() {
    int a,b;
    scanf("%a",&a);
    scanf("%b",&b);
    if ( a>b && a%b==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}