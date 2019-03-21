#include <stdio.h>
void main()
{
    double base, alt, sup;

    printf("Base: ");
    scanf("%lf", &base);
    printf("Altura: ");
    scanf("%lf", &alt);

    sup = base * alt / 2;

    printf("La superficie del triangulo");
    //se representan dos decimales -> "%.2f"
    printf(" (B: %.2f, A: %.2f) es %.2f", base, alt, sup);
}
