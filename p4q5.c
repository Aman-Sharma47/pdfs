/* Strings are usually ordered in lexicographical order. That means they are ordered by 
comparing their leftmost different characters. For example,abc<abd because c<d. 
Also z>yyy because z>y. If one string is an exact prefix of the other it is 
lexicographically smaller, e.g., gh<ghij.
 Given an array of strings sorted in lexicographical order, print all of its permutations 
in strict lexicographical order. If two permutations look the same, only print one of 
them. See the 'note' below for an example.
 Complete the function next_permutation which generates the permutations in the 
described order*/

#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char **start, char **end) {
    while (start < end) {
        swap(start, end);
        start++;
        end--;
    }
}

int next_permutation(char **s, int n) {
    int i = n - 2;

    // Find the first pair of adjacent elements in decreasing order
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0) {
        i--;
    }

    // If no such pair exists, the permutation is the last one
    if (i == -1) {
        return 0;
    }

    int j = n - 1;

    // Find the rightmost element greater than the element at index i
    while (strcmp(s[j], s[i]) <= 0) {
        j--;
    }

    // Swap the elements at indices i and j
    swap(&s[i], &s[j]);

    // Reverse the suffix starting from index i + 1
    reverse(&s[i + 1], &s[n - 1]);

    return 1;
}

int main() {
    // Example usage:
    char *s[] = {"ab", "bc", "cd"};
    int n = sizeof(s) / sizeof(s[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    printf("\n");

    // Generate and print permutations
    printf("Permutations in lexicographical order:\n");
    do {
        for (int i = 0; i < n; i++) {
            printf("%s ", s[i]);
        }
        printf("\n");
    } while (next_permutation(s, n));

    return 0;
}