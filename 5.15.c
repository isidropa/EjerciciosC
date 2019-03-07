#include <stdio.h>
void main()
{
    float px1, py1, px2, py2, m, n;
    printf("Puntos:\nP1_x: "); scanf("%f", &px1);
    printf("P1_y: "); scanf("%f", &py1);
    printf("\nP2_x: "); scanf("%f", &px2);
    printf("P2_y: "); scanf("%f", &py2);

    m = (py1-py2)/(px1-px2);
    n = py1 - m * px1;

    printf("\ny = %.2f x * %.2f", m, n);
}
