#include <stdio.h>
short esPrimoPerfecto(short);
short esPrimo(short);
void main()
{
    puts("\tNumeros primos perfectos menores que 1000\n");
    for(short i=1; i<1000; i++)
        if(esPrimoPerfecto(i)) printf("%3hd\n", i);
}

short esPrimoPerfecto(short n)
{
    if(esPrimo(n) && esPrimo((n-1) / 2))
        return 1;
    else
        return 0;
}
short esPrimo(short n)
{
    short cont=0;
    for(short i=1; i<=n; i++)
        if(n%i == 0) cont++;
    if(cont > 2)                return 0;
    else if(cont == 2)          return 1;
    else                        return 0;
}
