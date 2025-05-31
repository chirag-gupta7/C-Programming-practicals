#include <stdio.h>

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n, element, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    result = searchElement(arr, n, element);

    if (result != -1) {
        printf("Element %d found at index %d.\n", element, result);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}