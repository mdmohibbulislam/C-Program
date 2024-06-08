#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseAndUppercase(char *str) {
    int length = strlen(str);
    // Temporary array to hold the reversed string
    char reversed[length + 1];

    // Reverse the string and convert to uppercase
    for (int i = 0; i < length; i++) {
        reversed[i] = toupper(str[length - 1 - i]);
    }

    // Null-terminate the reversed string
    reversed[length] = '\0';

    // Copy the reversed string back to the original string
    strcpy(str, reversed);
}

int main() {
    // Define the string
    char s[] = "hello";

    // Call the function to reverse and convert to uppercase
    reverseAndUppercase(s);

    // Print the result
    printf("Reversed and Uppercase: %s\n", s);

    return 0;
}
