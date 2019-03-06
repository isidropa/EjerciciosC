#include <stdio.h>
#define PI 3.14159265
void main()
{
    double r, resul;

    printf("\tCalculo de la longitud, area y volumen");
    printf(" de una circunferencia de radio dado\n");
    printf("Radio: ");
    scanf("%lf", &r);

    resul = 2 * PI * r;
    printf("\nLong:\t%f\n", resul);
    resul = PI * r* r;
    printf("Area:\t%f\n", resul);
    resul = 4 * PI * r * r * r / 3;
    printf("Vol:\t%f", resul);
}
