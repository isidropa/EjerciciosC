#include <stdio.h>
#include <stdlib.h>
long ind_mayor(long v[], long);
void main()
{
    long aleatorios[100], pos;
    srand(time(NULL));
    puts("100 numeros aleatorios entre 0 y 100:\n");

    for(long i=0; i<100; i++)
    {
        aleatorios[i] = rand() % 101;
        printf("%3d\t", aleatorios[i]);
    }
    pos = ind_mayor(aleatorios, 100);
    printf("\n\nv[%d]: %d", pos, aleatorios[pos]);
}

long ind_mayor(long v[], long n)
{
    long mayor = v[0], indice=0;
    for(long i=1; i<n; i++)
        if(mayor < v[i]) { mayor = v[i]; indice = i; }
    return indice;
}
