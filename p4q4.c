/* Write a Program to accept 'n' names from user, store them into 2-D array and search 
whether a given name is present in array or not.*/

#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

int main() {
    // Input the number of names (n)
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Ensure n is within bounds
    if (n <= 0 || n > MAX_NAMES) {
        printf("Invalid number of names.\n");
        return 1;
    }

    // Input names into a 2-D array
    char names[MAX_NAMES][MAX_LENGTH];
    printf("Enter %d names, one per line:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Input the name to search
    char searchName[MAX_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    // Search for the given name in the array
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            found = 1;
            break;
        }
    }

    // Print the result
    if (found) {
        printf("%s is present in the array.\n", searchName);
    } else {
        printf("%s is not present in the array.\n", searchName);
    }

    return 0;
}