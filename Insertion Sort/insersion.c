#include<stdio.h>
int main()
{
    int n, i, j, item;
    int arr[] = {10, 5, 2, 8, 7};
    n = sizeof(arr)/sizeof(arr[0]);
    
    printf("\nBefore Insertion Sort : ");
    printf("[ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");

    for (i = 1; i < n; i++){
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }

    printf("\n\nAfter Insertion Sort : ");
    printf("[ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]\n\n");
    
    return 0;
}