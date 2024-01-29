// Write a program to sort the elements of the given  'N' array in descending order

#include <stdio.h>

void sortArrayDescending(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements are there in the array:");
    scanf("%d", &n);

    printf(" enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArrayDescending(arr, n);

    printf("The array in descending order:");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
