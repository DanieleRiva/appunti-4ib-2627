#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Quanti numeri? ");
    scanf("%d", &n);

    int *p = malloc(sizeof(int) * n);
    if (p == NULL)
    {
        printf("Errore nella memoria");
        exit(EXIT_FAILURE);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il n.%d", i);
        scanf("%d", p + i);
        sum += *(p + i);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);
    p = NULL;
}