#include <stdio.h>
#include <math.h>
int main(void)
{
    double aureo;

    printf("Obtener el numero Aureo mediante \
la ecuacion que lo describe (aureo^2 = aureo + 1)");

    aureo = (1 + sqrt(5)) / 2;

    printf("\nNumero Aureo = %.15f", aureo);
    return 0;
}
