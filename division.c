#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Division by zero is not allowed");
    }
    else {
        result = a / b;
        printf("Result = %.2f", result);
    }

    return 0;
}