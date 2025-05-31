#include<stdio.h>

int main()
{
int n, i;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("The array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    
    return 0;
}