// Your code here...
#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    // printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit position you want to check */
    // printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    /* Right shift num, n times and perform bitwise AND with 1 */
    newNum = num & (~(1 << n));

    printf("%d", newNum);

    return 0;
}