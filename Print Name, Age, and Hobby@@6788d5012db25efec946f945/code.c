#include <stdio.h>

int main() {
    char a[10];
    int b;
    char c[10];
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    printf("Name: %c\n",a);
    printf("Age: %d",b);
    printf("Hobby: %c",c);
    return 0;
}