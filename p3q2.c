// Write a program to print n th term of the series 0,3,8,15,24,35,48,63,80,99
#include <stdio.h>

int findNthTerm(int n) {
    return n * n - 1;
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the nth term of the series
    printf("The %dth term of the series is: %d\n", n, findNthTerm(n));

    return 0;
}