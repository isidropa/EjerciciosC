#include <stdio.h>
int sumaValPeriMatriz(int v[3][4], int n, int m)
{
    int suma=0;
    short i,j;
    i=0;
    for(j=0; j<m; j++)
        suma += v[i][j];
    i=n-1;
    for(j=0; j<m; j++)
        suma += v[i][j];
    j=0;
    for(i=1; i<n-1; i++)
        suma += v[i][j];
    j=m-1;
    for(i=1; i<n-1; i++)
        suma += v[i][j];
    return suma;
}
void impMatriz(int v[3][4], int n, int m)
{
    for(short i=0; i<n; i++)
    {
        for(short j=0; j<m; j++)
            printf(" %2d", v[i][j]);
        puts("");
    }
}
void main()
{
    printf("\tLa suma de los valores de la periferia debe ");
    printf("superar a cualquier otro valor de la matriz");
    short n=3, m=4;
    int periferia, aux, matriz[3][4]= { {1,  3,   6, 1},
                                        {2, 41,  80, 6},
                                        {2,  7,   9, 3}  };
    //Matriz
    printf("\nMatriz 3x4:\n\n");
    impMatriz(matriz, n, m);
    periferia = sumaValPeriMatriz(matriz, n, m);
    printf("Suma periferia: %d\n", periferia);
    //Comprobar y modificar
    for(short i=1; i<n-1; i++)
        for(short j=1; j<m-1; j++)
            if(matriz[i][j] > periferia)
            {
                aux = matriz[i][j];
                matriz[i][j] = matriz[0][j];
                matriz[0][j] = aux;
                periferia = sumaValPeriMatriz(matriz, n, m);
                j--;
            }
    //Matriz modificada
    printf("\nMatriz 3x4 (Modificada):\n\n");
    impMatriz(matriz, n, m);
    printf("Suma periferia: %d\n", periferia);
}
