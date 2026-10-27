#include <stdio.h>

void printArr(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[0];

    printArr(p, sizeof(arr) / sizeof(arr[0]));
}