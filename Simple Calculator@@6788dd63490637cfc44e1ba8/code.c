#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    // Taking input from the user
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("error\n");  // Error if input format is incorrect
        return 1;
    }

    // Performing the operation based on the operator
    if (op == '+') {
        result = a + b;
        printf("%d\n", result);
    }
    else if (op == '-') {
        result = a - b;
        printf("%d\n", result);
    }
    else if (op == '*') {
        result = a * b;
        printf("%d\n", result);
    }
    else if (op == '/') {
        if (b != 0) {
            result = a / b;
            printf("%d\n", result);
        } else {
            printf("error\n");  // Error for division by zero
        }
    }
    else {
        printf("error\n");  // Error if an invalid operator is entered
    }

    return 0;
}
