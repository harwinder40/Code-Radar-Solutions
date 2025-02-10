#include <stdio.h>

int main() {
    int a, b, result;
    char op;  // Operator

    // Taking user input for two numbers
   
    scanf("%d %d", &a, &b);

    // Taking user input for the operator
    
    scanf(" %c", &op);  // Space before %c to handle newline issues

    // Performing the operation using if-else statements
    if (op == '+') {
        result = a + b;
        printf("%d\n", result);
    }
    else if (op == '-') {
        result = a - b;
        printf(" %d\n", result);
    }
    else if (op == '*') {
        result = a * b;
        printf("%d\n", result);
    }
    else if (op == '/') {
        if (b != 0) {  // Avoid division by zero
            result = a / b;
            printf("%d\n", result);
        } else {
            printf();
        }
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
