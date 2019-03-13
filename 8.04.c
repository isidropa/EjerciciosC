#include <stdio.h>
#include <stdlib.h>
int ind_mayor(int v[], short);
void main()
{
    int aleatorios[100], pos;
    srand(time());
    puts("100 numeros aleatorios entre 0 y 100:\n");

    for(short i=0; i<100; i++)
    {
        aleatorios[i] = rand() % 101;
        printf("%3hd\t", aleatorios[i]);
    }
    pos = ind_mayor(aleatorios, 100);
    printf("\n\nv[%d]: %d", pos, aleatorios[pos]);
}

int ind_mayor(int v[], short n)
{
    int mayor = v[0], indice=0;
    for(short i=1; i<n; i++)
        if(mayor < v[i]) { mayor = v[i]; indice = i; }
    return indice;
}
