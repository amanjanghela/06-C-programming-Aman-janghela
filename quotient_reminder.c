#include <stdio.h>

int main() {
    int a, b;
    int quotient, remainder;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Division by zero is not allowed");
    }
    else {
        quotient = a / b;
        remainder = a % b;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d", remainder);
    }

    return 0;
}