#include <stdio.h>

int main(void)
{
    long num, cuadrado, cubo;

    printf("Valor: ");
    scanf("%d", &num);

    cuadrado = num * num;
    cubo = cuadrado * num;

    printf("\n%i^2: %i\n", num, cuadrado);
    printf("%d^3: %i\n", num, cubo);

    return 0;
}
