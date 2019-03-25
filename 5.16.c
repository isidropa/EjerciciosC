#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, delta;
    puts("\tCalculadora ecuaciones de 2 grado, \
dame los valores de los coeficientes a, b y c");
    printf("a b c: "); scanf("%lf %lf %lf", &a, &b, &c);

    if(a!=0 && b!=0 && c!=0)
    {
        delta = b*b - 4*a*c;
        if(delta >= 0)
            printf("x1 = %.4f\nx2 = %.4f",
                   (-b + sqrt(delta)) / (2*a),
                   (-b - sqrt(delta)) / (2*a));
        else
            printf("x1 = %.4f + %.4f i\nx2 = %.4f - %.4f i",
                   -b/(2*a), sqrt(-delta/(4*a*a)),
                   -b/(2*a), sqrt(-delta/(4*a*a)));
    }
    else if(a!=0 && b==0)
    {
        delta = -c/a;
        if(delta >= 0)
            printf("x1 = %.4f\nx2 = %.4f", sqrt(delta),
                   -sqrt(delta));
        else
            printf("x1 = %.4f i\nx2 = %.4f i", sqrt(-delta),
                   -sqrt(-delta));
    }
    else if(a==0 && b!=0)
        printf("x = %.3f", -c/b);
    else if(a==0 && b==0)
        printf("a y b no pueden ser 0");
}
