#include <stdio.h>
long esPrimo(long);
void main()
{
    puts("\tNumeros primos perfectos menores que 1000\n");
    for(long n=1; n<1000; n++)
        if(esPrimo(n) && esPrimo((n-1)/2))
           printf("%3d\n", n);
}

long esPrimo(long n)
{
    long cont=0;
    for(long i=1; i<=n; i++)
        if(n%i == 0) cont++;
    if(cont == 2)   return 1;
    else            return 0;
}
