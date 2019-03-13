#include <stdio.h>
void main()
{
    short impares[100], cont=1;
    puts("\t100 primeros impares positivos");
    for(short i=0; i<100; i++)
    {
        impares[i] = cont;
        cont += 2;
    }
    for(short i=0; i<100; i++)
        printf("%3hd\t", impares[i]);
}
