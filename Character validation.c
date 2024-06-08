#include <stdio.h>
#include <string.h>

int main() {
    char ch1[17] = "Mobile";  // Increased size to hold "MobileTelephone\0"
    char ch2[10] = "Telephone"; // Increased size to properly hold "Telephone\0"
    strcat(ch1, ch2);
    printf("%s\n", ch1); // Printing ch1 to see the concatenated result
    printf("%s\n", ch2); // Printing ch2 to see the original string
    return 0;
}
