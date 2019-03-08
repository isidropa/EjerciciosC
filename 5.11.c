#include <stdio.h>
void main()
{
    float a, b;
    printf("\tProporcionar los coeficientes a y b de la ");
    printf("ecuacion de 1\xA7 grado, ax + b = 0\n");
    printf("a: "); scanf("%f", &a);
    printf("b: "); scanf("%f", &b);

    switch((a>0 || a<0) ? 0 : 1)
    {
        case 0:
            printf("El resultado es x = %.2f", -b/a);
            break;
        case 1:
        default:
            printf("ERROR. 'a' debe ser distinta de 0");
    }
}
