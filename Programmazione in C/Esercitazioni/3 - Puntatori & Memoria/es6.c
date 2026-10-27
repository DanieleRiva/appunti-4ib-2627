#include <stdio.h>

void main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int *p1 = &arr1[0];

    int arr2[5];
    int *p2 = &arr2[0];

    for (int i = 0; i < 5; i++)
    {
        *(p2 + i) = *(p1 + i);
        printf("%d ", *(p2 + i));
    }
}