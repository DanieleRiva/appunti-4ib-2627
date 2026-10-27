#include <stdio.h>

int sommaArr(int *p, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(p + i);
    }

    return sum;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int *p = &arr[0];

    printf("%d", 
        sommaArr(
            &arr[0], 
            sizeof(arr) / sizeof(arr[0])
        )
    );
}