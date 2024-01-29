/* Write a program to find the first capital letter in a string using recursion*/

#include <stdio.h>

char findFirstCapital(char *str) {
    if (*str == '\0') {
        return '\0'; // Return null character if no capital letter is found
    } else {
        if (*str >= 'A' && *str <= 'Z') {
            return *str; // Return the first capital letter found
        } else {
            return findFirstCapital(str + 1); // Recursively search the rest of the string
        }
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    char firstCapital = findFirstCapital(input);

    if (firstCapital != '\0') {
        printf("The first capital letter in the string is: %c\n", firstCapital);
    } else {
        printf("No capital letter found in the string.\n");
    }

    return 0;
}