#include <stdio.h>

int main() {
    char a[10];
    int b;
    char c[10];
    scanf("%s",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}