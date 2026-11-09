#include <stdio.h>

int main() {
    float salary;
    int age;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your salary is: %.2f\n", salary);
    printf("Your age is: %d", age);

    return 0;
}