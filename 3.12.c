#include <stdio.h>
#include <stdint.h>
int main()
{
    int8_t car;

    printf("Introduzca un caracter para mostrar su \
codigo ASCII: ");
    scanf("%c", &car);

    printf("El codigo ASCII del caracter %c en decimal \
es %hhd", car, car);
    return 0;
}
