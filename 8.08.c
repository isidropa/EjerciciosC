#include <stdio.h>
void intercambio(int *ant, int* act)
{
    int aux = *act;
    * act = *ant;
    *ant = aux;
}
void rotarVectorDer(int v[], int tam, int num)
{
    for(int j=1; j<=num; j++)
        for(int i=0; i<tam; i++)
            intercambio(&v[tam-1], &v[i]);
}

void main()
{
    int vector[5] = {0, 1, 2, 3, 4};
    rotarVectorDer(vector, 5, 2);
    for(short i=0; i<5; i++)
        printf("%d\t", vector[i]);
}
