/*Write a  program to Find Out Even Number List */
#include <stdio.h>

int main() {
    // Input the size of the list
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    // Input the list elements
    int list[n];
    printf("Enter the elements of the list:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    // Print even numbers from the list
    printf("Even numbers in the list:\n");
    for (int i = 0; i < n; i++) {
        if (list[i] % 2 == 0) {
            printf("%d ", list[i]);
        }
    }
    printf("\n");

    return 0;
}