#include <stdio.h>
void main()
{
    int x1, x2, x3, aux;
    printf("\tIntroduce tres valores a ordenar\n");

    printf("x1 = "); scanf("%d", &x1);
    printf("x2 = "); scanf("%d", &x2);
    printf("x3 = "); scanf("%d", &x3);

    if(x1 > x2)
    {
        aux = x1; x1 = x2; x2 = aux;
        if(x2 > x3)
        {
            aux= x2; x2 = x3; x3 = aux;
            if(x1 > x2)
            {
                aux = x1; x1 = x2; x2 = aux;
            }
        }
    }

    printf("\nx1 = %d, x2 = %d, x3 = %d", x1, x2, x3);
}
