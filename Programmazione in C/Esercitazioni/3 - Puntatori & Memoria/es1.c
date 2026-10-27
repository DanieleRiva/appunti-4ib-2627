#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    int n1, n2;
    
    printf("Inserisci n1 e n2: ");
    scanf("%d %d", &n1, &n2);

    printf("%d %d\n", n1, n2);
    swap(&n1, &n2);
    printf("%d %d\n", n1, n2);
}