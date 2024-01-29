/*Given a string, the task is to encrypt this string using ! and @ symbols, alternatively. 
While encrypting the message the encrypted format must repeat the symbol as 
many times as the letter position in Alphabetical order. If any digit then print "None"*/

#include <stdio.h>
#include <ctype.h>

void encryptString(char str[]) {
    int position = 1;
    int symbol = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (position % 2 == 1) {
                symbol = '!';
            } else {
                symbol = '@';
            }

            for (int j = 0; j < position; j++) {
                printf("%c", symbol);
            }

            position++;
        } else if (isdigit(str[i])) {
            printf("None");
            return;
        } else {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Hey, could you please enter a string? ");
    fgets(str, sizeof(str), stdin);

    printf("The encrypted string is: ");
    encryptString(str);

    return 0;
}

