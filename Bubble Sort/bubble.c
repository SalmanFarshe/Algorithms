#include<stdio.h>
int main()
{
    int temp;
    int arr[] = {10, 50, 30, 15, 25, 35, 40, 80};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nBefore Bubble Sort : ");
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
    
    printf("\nAfter Bubble Sort : ");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");   
    
    return 0;
}