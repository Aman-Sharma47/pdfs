/*Write a program to rotate an array by k elements to the right*/

#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    int temp[k];

    // Store the last k elements in the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = size - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    // Copy the elements from the temporary array to the beginning of the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf(" How many elements do you want to rotate the array by: ");
    scanf("%d", &k);

    rotateArray(arr, size, k);

    printf("The array after rotating it by %d elements to the right is:\n", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
