#include <stdio.h>
void main()
{
    int a, b, coef=0;
    printf("\tMetodo de division mediante \
restas sucesivas\n");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);

    for(a; a >= b; a=a-b)
        coef++;

    printf("\nCoeficiente: %d", coef);
}
