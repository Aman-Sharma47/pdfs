//Write a Program to count the number of vowels, consonants in a string entered by the user


#include <stdio.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
                string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}