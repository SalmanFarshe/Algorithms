#include<stdio.h>
int main()
{
    int n, i, j, min_indx, temp;
    int arr[] = {10, 5, 2, 8, 7};
    n = sizeof(arr)/sizeof(arr[0]);
    
    printf("\nBefore Selection Sort : ");
    printf("[ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");

    for (i = 0; i < n - 1; i++){
        min_indx = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min_indx])
            {
                min_indx = j;
            }
        }
        if (min_indx != i)
        {
            temp = arr[min_indx];
            arr[min_indx] = arr[i];
            arr[i] = temp;
        }
    }

    printf("\n\nAfter Selection Sort : ");
    printf("[ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]\n\n");

    return 0;
}