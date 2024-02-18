#include<stdio.h>
int main()
{
    int temp, mid, low, high;
    int arr[] = {10, 50, 30, 15, 25, 35, 40, 80};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nBefore Sort : ");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size-1; j++)
        {
            if (arr[i]>=arr[j+1])
            {
                temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("\nAfter Sort : ");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");

    int item = 15;

    low = 0;
    high = size - 1;
    
    while (high >= low)
    {
        mid = low + (high - low) / 2;
        if (item == arr[mid])
        {
            printf("\n%d is Found!", item);
            return 0;
        }
        else if (item <= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        } 
    }
    
    printf("\nNot Found");

    return 0;
}