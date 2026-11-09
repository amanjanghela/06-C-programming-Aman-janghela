#include <stdio.h>

int main() {
    int num, original, remainder;
    int sum = 0, digits = 0, temp;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original && original >= 0) {
        printf("Number is Armstrong");
    }
    else {
        printf("Number is Not Armstrong");
    }

    return 0;
}