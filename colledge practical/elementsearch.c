#include<stdio.h>

int findElement(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
            return i;                
    }
    return -1; 
}
int main()
{
    int element, n;
    int arr[] = {123, 1234, 1245, 356543, 32534, 345634, 14545, 555, 666, 999, 2324235, 32562356, 111 , 222, 433, 444, 56, 7, 7, 88, 9, 9, 0};
    printf("enter the element you want position of :");
    scanf("%d", &element);
    n = sizeof(arr);
    int position = findElement(arr, n, element);

    if(position == -1){
        printf("Element not found ");
    }
    else{
        printf("Element found at position %d in index array", position);
    }
    return 0;
}