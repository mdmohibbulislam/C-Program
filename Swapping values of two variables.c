#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Print the values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;

    // Print the values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
