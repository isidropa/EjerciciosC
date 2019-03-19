#include <stdio.h>
#include <string.h>
void main()
{
    char cad1[80], cad2[80];
    puts("\tComparador de cadenas");
    printf("Cadena 1: "); gets(cad1);
    printf("Cadena 2: "); gets(cad2);

    if(strcmp(cad1, cad2) == 0)
        printf("\nCadena 1 == Cadena 2");
    else if(strcmp(cad1, cad2) < 0)
        printf("\nCadena 1 < Cadena 2");
    else
        printf("\nCadena 1 > Cadena 2");
}
