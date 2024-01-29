/* Given any two Integers 'N1' and'N2' ,Write a program to check whether two integers 
of the same sign or not using bit manipulation */

#include <stdio.h>

int haveSameSign(int n1, int n2) {
    // Checking if the two integers have the same sign
    return ((n1 ^ n2) >= 0);
}

int main() {
    int N1, N2;

    printf("Enter two integers: ");
    scanf("%d %d", &N1, &N2);

    if (haveSameSign(N1, N2)) {
        printf("Yes, the two integers have the same sign.\n");
    } else {
        printf("No, the two integers do not have the same sign.\n");
    }

    return 0;
}

