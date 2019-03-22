#include <stdio.h>
void main()
{
    long a, b, mcd;
    do
    {
        printf("a: "); scanf("%d", &a);
        printf("b: "); scanf("%d", &b);
        if(a == 0 && b == 0)
            break;
        while(b)
        {
            static short cont = 0;
            mcd = b;
            b = a%b;
            a = mcd;
            printf("\ncont = %hu", ++cont);
        }
        printf("\nEl mcd es %d.\n\n", mcd);
    }while(1);
}
