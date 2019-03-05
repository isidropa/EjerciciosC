#include <stdio.h>
#define PI 3.14159
void main(void)
{
    unsigned short R;
    float L, S;
    const float pi = 3.14159;

    printf("Radio: ");
    // "%hd" = short, aunque tambien vale "%d"
    scanf("%hd", &R);

    L = 2 * PI * R;
    S = pi * R * R;

    printf("Longitud: %.3f", L);
    printf("\nSuperficie: %.3f", S);
}
