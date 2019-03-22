#include <stdio.h>
void main()
{
    long impares[100], cont=1;
    puts("\t100 primeros impares positivos");
    for(long i=0; i<100; i++)
    {
        impares[i] = cont;
        cont += 2;
    }
    for(long i=0; i<100; i++)
        printf("%3d\t", impares[i]);
}
