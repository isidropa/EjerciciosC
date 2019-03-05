#include <stdio.h>
int main()
{
    float F, C;

    printf("\t\tConversion de Fahrenheit a Celsius\n");
    printf("Proporcioname los Grados Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0/9) * (F-32);

    // \xa7 = \xA7 = º
    printf("%.3f \xa7 F => %.3f \xA7 C", F, C);

    return 0;
}
