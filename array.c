#include <stdio.h>

int *findMax(int arr[], int size)
{
    int *max = &arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            max = &arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {10, 25, 7, 42, 18};
    int size = 5;

    int *ptr = findMax(arr, size);

    printf("Maximum element = %d\n", *ptr);

    return 0;
}