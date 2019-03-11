#include <stdio.h>
void main()
{
    short dig, cont=0;
    unsigned long num, n=1, aux;
    puts("\tApariciones de un digito (0-9) en un numero");
    printf("Numero(9 digitos max):\t"); scanf("%d", &num);
    printf("Digito(1 digito):\t"); scanf("%hd", &dig);

    for(unsigned long i=num; i > 10; i = i/10)
        n *= 10;

    aux = num;
    for(n; n>0; n= n/10)
    {
        if(aux/n == dig)
            cont++;
        aux = aux % n;
    }
    printf("\n%d aparece %d veces en %d", dig, cont, num);
}
