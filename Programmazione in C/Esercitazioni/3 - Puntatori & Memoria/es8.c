#include <stdio.h>
#include <stdlib.h>

int* pariArr(int n)
{
    int *p = malloc(sizeof(int) * n);
    if (p == NULL)
    {
        printf("Errore nella memoria");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        *(p + i) = i * 2;
    }

    return p;
}

void main()
{
    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int *p = pariArr(n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);
    p = NULL;
}