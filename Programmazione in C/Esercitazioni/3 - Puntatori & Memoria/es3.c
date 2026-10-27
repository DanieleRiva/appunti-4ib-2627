#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[0];
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("Max: %d", max);
}