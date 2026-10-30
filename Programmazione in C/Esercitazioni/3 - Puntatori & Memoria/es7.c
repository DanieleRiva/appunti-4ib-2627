#include <stdio.h>
#include <stdlib.h>

int* cloneArr(int *p, int size)
{
    int *p2 = malloc(size * sizeof(int));
    if (p2 == NULL)
    {
        printf("Errore nella memoria.");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++)
    {
        *(p2 + i) = *(p + i);
    }

    return p2;
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *p2 = cloneArr(
        arr, 
        sizeof(arr) / sizeof(arr[0])
    );

    printf("%d", *p2);

    free(p2);
    p2 = NULL;
}