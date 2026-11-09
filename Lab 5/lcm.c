#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a == 0 || b == 0) {
        lcm = 0;
    }
    else {
        lcm = (a > b) ? a : b;

        while (lcm % a != 0 || lcm % b != 0) {
            lcm++;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}