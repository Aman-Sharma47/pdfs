/*Write a program to read the starting and ending year values and print the 
Leap years present between these two given years.*/
#include <stdio.h>

int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4,
    // but not divisible by 100 unless it is divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d:\n", startYear, endYear);

    for (int year = startYear; year <= endYear; ++year) {
        if (isLeapYear(year)) {
            printf("%d\n", year);
        }
    }

    return 0;
}