#include <stdio.h>
void main()
{
    long num;
    printf("Introduce un numero de tres digitos: ");
    scanf("%d", &num);


    printf("Digitos: %d", num / 100);
    num = num % 100;
    printf(" %d", num / 10);
    num = num % 10;
    printf(" %d", num);
}
