#include <stdio.h>

int* cloneArr(int *p, int size)
{
    // Creo area di memoria con malloc()

    // restituisco il relativo puntatore
}

void main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cloneArr(
        arr, 
        sizeof(arr) / sizeof(arr[0])
    );
}