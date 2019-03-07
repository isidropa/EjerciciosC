#include <stdio.h>
void main()
{
    short px, py, cx, cy, r;
    printf("Punto:\nP_x: "); scanf("%hd", &px);
    printf("P_y: "); scanf("%hd", &py);
    printf("\nCentro:\nc_x: "); scanf("%hd", &cx);
    printf("c_y: "); scanf("%hd", &cy);
    printf("\nRadio:\t"); scanf("%hd", &r);

    short pmod_x = px - cx, pmod_y = py - cy;

    if( (pmod_x == r && pmod_y == 0)  ||
        (pmod_x == 0 && pmod_y == r)  ||
        (pmod_x == -r && pmod_y == 0) ||
        (pmod_x == 0 && pmod_y == -r)    )
        printf("\nPunto en el BORDE de la circunferencia.");
    else if( (pmod_x > -r && pmod_x < r) &&
             (pmod_y > -r && pmod_y < r)    )
        printf("\nPunto DENTRO de la circunferencia.");
    else
        printf("\nPunto FUERA de la circunferencia.");
}
