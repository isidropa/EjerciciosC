#include <stdio.h>
short primo(int n)
{
    short c=0;
    for(int i=1; i<=n; i++)
        if(n%i == 0)
            c++;
    if(c == 2)  return 1;
    else        return 0;
}
short todosPrimos(int v[], short tam)
{
    short c=0;
    for(short i=0; i<tam; i++)
        if(primo(v[i]))
            c++;
    if(c == tam)return 1;
    else        return 0;
}

void main()
{
    int v1[3] = {3, 5, 11}, v2[3] = {1, 2, 3};
    puts("\t1=Todos son primos\t0=Alguno no es primo");
    printf("v1[]: %d, %d, %d\n", v1[0], v1[1], v1[2]);
    printf("v2[]: %d, %d, %d\n", v2[0], v2[1], v2[2]);
    printf("v1[] -> %hd\n", todosPrimos(v1, 3));
    printf("v2[] -> %hd", todosPrimos(v2, 3));
}
