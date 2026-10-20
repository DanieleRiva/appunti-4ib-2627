#include <stdio.h>

#include <stdlib.h>

void clear()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
    }
}

// Creazione di un puntatore
void esempio1()
{
    int a, *pa;
    int b = 5, *pb;

    a = 5;
    pa = &a;

    printf("%d \n", a);
    printf("%p", pa);
}


// DEREFERENZIAZIONE
// Stampare il valore contenuto in una cella di memoria
void esempio2()
{
    int i = 15, *pi;
    pi = &i;

    printf("%p \n", pi);
    printf("%d \n", *pi);

    int a = 9;
    pi = &a;

    printf("%p \n", pi);
    printf("%d \n", *pi);

    // Stampa il contenuto della cella di indirizzo pi,
    // ma in esadecimale
    printf("%p", *pi);

    // La variabile y contiene anch'essa 10
    int x = 10;
    int y;
    int *px;

    px = &x;
    y = *px;

    printf("\nX: %d, Y: %d", x, y);
}

// Operatore sizeof()
void esempio3()
{
    int i = 5;
    int *pi = &i;

    float j = 5.8;
    float *pj = &j;

    if (*pi == *pj)
    {

    }

    printf("%d \n", sizeof(i));
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(bool));
    printf("%d \n", sizeof(pi));
    printf("%d \n", sizeof(int *));
    printf("%d \n", sizeof(float *));
    printf("%d \n", sizeof(bool *));

    int x = 5, *px = &x;
    // x = 5
    // x = 17

    *px = 17;
    printf("%p \n", px);
    printf("%d \n", x);
    printf("\nInserisci un nuovo valore per x: ");
    // scanf("%d", &px);
    printf("%d \n", x);
    printf("%p \n", px);
    printf("%p \n", *px);
    
    // printf("%d \n", *px); -> stampa lo stesso valore

    clear();

    int y = 5, *py = &y;
    int z = 5, *pz = &z;

    if (*py == *pz)
    {
        printf("\nUguali!\n");

        *py += *pz;
        printf("%d %d", *py, *pz);
    }
    else
    {
        printf("\nDiversi!\n");
    }
}

// Operatore sizeof() con array
void esempio4()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d \n", sizeof(arr) / sizeof(arr[0]));
}

// Incremento/Decremento dei puntatori
void esempio5()
{
    int i = 5, *pi = &i;

    printf("%p \n", pi);
    printf("%d \n", *pi);
    *pi = *pi + 1;
    printf("%p \n", pi);
    printf("%d \n", *pi);
    pi = pi + 1;
    printf("%p \n", pi);
    printf("%d \n", *pi);
    pi = pi - 1;
    printf("%p \n", pi);
    printf("%d \n", *pi);
}


void esempio6()
{
    int a = 5;
    int *pa = &a;
    int **ppa = &pa;

    printf("%d \n", a);
    printf("%p \n", pa);
    printf("%p \n", ppa);

    printf("\n\n");

    printf("%p \n", *ppa);
    printf("%d \n", *pa);
    printf("%d \n", a);
}

// int x = 5
// int y = 10

// swapparli

// int x = 10
// int y = 5

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("Dentro metodo: %d %d \n", x, y);
}

void swapGiusto(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void arrayEsempio(int arr[], int dim)
{
    // int *pi = arr;
    int *pi = &arr[0];
    
    // Stampa la cella 2 usando solo il puntatore
    printf("%d \n", *(pi + 2));
    
    // Controllare se cella 2 e 3 contengono lo stesso
    // valore. In tal caso, stampa UGUALI. Solo puntatore.
    if (*(pi + 2) == *(pi + 3))
    {
        printf("Uguali");
    }

    // Dato l'array, trovare il numero massimo contenuto,
    // usando solo il puntatore.
    int max = arr[0];

    for (int i = 0; i < dim; i++)
    {
        if (*(pi + i) > max)
        {
            max = *(pi + i);
        }
    }

    printf("Max: %d \n", max);
}

void esempio7()
{
    int *p = NULL;

    void *pVoid;
    int *pInt;
    pVoid = pInt;

    // NULL =
    //  (void *) 0;

    int arr[] = {1, 2, 3, 4, 5};
    int *pArr = &arr[0];

    // Array di Puntatori
    int *vett[5] = {NULL};
    int **pVett = &vett[0];

    // Ciclo for per riempire vett
    // di puntatori di arr
    int dim = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < dim; i++)
    {
        *(pVett + i) = pArr + i;
    }

    for (int i = 0; i < dim; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < dim; i++)
    {
        printf(" %p ", vett[i]);
    }
    printf("\n\n");
    for (int i = 0; i < dim; i++)
    {
        printf(" %d ", *vett[i]);
    }

}

// Allocazione dinamica della memoria
void esempio8()
{
    // Heap

    // Memory Allocate (allocare)

    // Malloc restituisce un puntatore che punta alla zona
    // di memoria che andiamo a creare.
    int *p;
    p = malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Memora insufficiente");
        exit(EXIT_FAILURE);
    }

    *p = 7;

    printf("%p \n", p);
    printf("%d \n", *p);

    free(p);
    // NULL -> (void *) 0
    p = NULL;

    // 
    printf("%p \n", p);
}

void main()
{
    esempio8();
}