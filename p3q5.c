/*Write a program to input a positive number through the keyboard, and to print a new 
number by adding one to each of its digits.*/

#include <stdio.h>

int addOneToDigits(int num) {
    int result = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        digit = (digit + 1) % 10;
        result += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    int newNum = addOneToDigits(num);
    printf("The new number by adding one to each digit of %d is: %d\n", num, newNum);

    return 0;
}
