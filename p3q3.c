/* Program to Find GCD or HCF of Two Numbers */

#include <stdio.h>

int findGCD(int num1, int num2) {
    while(num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);
    printf("The GCD or HCF of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
