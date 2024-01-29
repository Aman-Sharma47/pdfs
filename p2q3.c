#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);

    // Swap characters from start to end
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    gets(inputString); // Note: gets() is used for simplicity; consider using fgets() for safer input.

    // Reverse the string
    reverseString(inputString);

    // Print the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}