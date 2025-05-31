#include<stdio.h>

int main()
{
    int i, n, index, arr[10];
    printf("enter the size of the array \n");
    scanf("%d", &n);
    printf("enter the elements of the array \n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("enter the index of the element to be deleted \n");
    scanf("%d", &index);
    if( index > n){
        printf("invalid index\n ");
    }
    else{
        for(i = index; i < n-1; i++){
            arr[i] = arr[i+1];
        }
    }
    printf("the array after deletion is : ");
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]\n", arr[i]);

    }
    
    return 0;
}