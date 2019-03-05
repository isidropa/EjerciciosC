#include <stdio.h>
void main()
{
    float base, alt, sup;

    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &alt);

    sup = base * alt / 2;

    printf("La superficie del triangulo");
    //es suficiente con representar dos decimales "%.2f"
    printf(" (B: %.2f, A: %.2f) es %.2f", base, alt, sup);
}
