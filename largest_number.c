#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("First number is Largest");
    }
    else if (b > a) {
        printf("Second number is Largest");
    }
    else {
        printf("Both numbers are Equal");
    }

    return 0;
}