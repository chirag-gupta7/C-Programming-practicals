#include<stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5}; 
    int position, element, i;

    printf("Enter the element and position of the element to be inserted (0-based index):\n");
    scanf("%d %d", &element, &position);

    if(position > 5 || position < 0) { 
        printf("Invalid position\n");
    } else {
        
        for(i = 5; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[position] = element;

        
        printf("The array after insertion is:\n");
        for(i = 0; i < 6; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}