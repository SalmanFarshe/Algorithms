#include<stdio.h>
int main()
{
    int arr[] = {10, 50, 30, 15, 25, 35, 40, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int item = 40, count = 0, indexx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            count++;
            indexx = i;
        }
    }
    
    printf("\nThe Array is : ");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" ]");

    if (count > 0)
    {
        printf("\nItem %d Found at %d Position", item, indexx+1);
    }
    else
    {
        printf("\nSorry! Item is not in this array");
    }

    return 0;
}