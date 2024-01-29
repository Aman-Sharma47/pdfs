/*Write a program to test whether m is a factor of n*/

#include <stdio.h>

int isFactor(int m, int n) {
    if (n % m == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (isFactor(m, n)) {
        printf("%d is a factor of %d\n", m, n);
    } else {
        printf("%d is not a factor of %d\n", m, n);
    }

    return 0;
}
