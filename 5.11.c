#include <stdio.h>
void main()
{
    float a, b;
    printf("Proporcionar los coeficientes a y b de la ");
    printf("ecuacion de primer grado, ax + b = 0\n");
    printf("a: "); scanf("%f", &a);
    printf("b: "); scanf("%f", &b);

    if(a > 0)
        printf("El resultado es x = %f", -b/a);
    else if (a < 0)
        printf("El resultado es x = %f", -b/a);
    else
        printf("ERROR. 'a' debe ser distinta de 0");
}
