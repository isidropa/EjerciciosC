#include <stdio.h>
void main()
{
    long a, b, cond=0;
    puts("Fin de programa -> a>0, b>0 y b-a>100");

    do
    {
        printf("a: "); scanf("%d", &a);
        printf("b: "); scanf("%d", &b);
        if(a>0 && b>0 && b-a>100)
            cond = -1;
        else
            printf("\n");
    }while(cond != -1);
}
