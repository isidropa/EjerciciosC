#include <stdio.h>
void main()
{
    long x1, x2, x3;
    printf("x1 = "); scanf("%d", &x1);
    printf("x2 = "); scanf("%d", &x2);
    printf("x3 = "); scanf("%d", &x3);

    if(x1 > x2 && x2 > x3)
        printf("x3 < x2 < x1");
    else if(x1 > x2 && x1 > x3)
        printf("x2 < x3 < x1");
    else if(x1 > x2 && x2 < x3 && x1 < x3)
        printf("x2 < x1 < x3");
    else if(x1 > x3)
        printf("x3 < x1 < x2");
    else if(x2 > x3)
        printf("x1 < x3 < x2");
    else
        printf("x1 < x2 < x3");
}
