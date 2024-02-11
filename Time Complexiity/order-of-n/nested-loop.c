#include<stdio.h>
int main()
{
    int n = 10;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++){
            count++;
        }
    }
    printf("n = 2 then count is 4\n");
    printf("n = 6 then count is 36\n");
    printf("n = 10 then count is 100\n");
    printf("n = n then count is n*n\n");
    printf("Complexity for result = %d is O(n^2)", count);
    return 0;
}