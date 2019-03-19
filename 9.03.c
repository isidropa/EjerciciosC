#include <stdio.h>
#include <ctype.h>
short carNum(char c)
{
    switch(c)
    {
    case '0': return 0; case '1': return 1;
    case '2': return 2; case '3': return 3;
    case '4': return 4; case '5': return 5;
    case '6': return 6; case '7': return 7;
    case '8': return 8; case '9': return 9;
    }
}
void main()
{
    int suma=0;
    char cad[80];
    puts("\tSuma de numeros de una cadena");
    gets(cad);

    for(short i=0; cad[i]; i++)
        if(isdigit(cad[i]))
            suma += carNum(cad[i]);
    printf("Suma: %d", suma);
}
