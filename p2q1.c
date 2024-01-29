// Write a program to find the greatest common divisor (GCD) and LCM of given two number

#include <stdio.h>

int findGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    return num1;
}

int findLCM(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;

    printf("Hey, could you please enter the first number? ");
    scanf("%d", &num1);

    printf("Great! Now, could you kindly enter the second number? ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2);

    printf("The greatest common divisor (GCD) of %d and %d is: %d\n", num1, num2, gcd);
    printf("The least common multiple (LCM) of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
