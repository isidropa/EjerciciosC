#include <stdio.h>
void main()
{
    unsigned short a, b, mcd;
    do
    {
        printf("a: "); scanf("%hu", &a);
        printf("b: "); scanf("%hu", &b);
        if(a == 0 && b == 0)
            break;
        while(b)
        {
            static unsigned short cont = 0;
            mcd = b;
            b = a%b;
            a = mcd;
            printf("\ncont = %hu", ++cont);
        }
        printf("\nEl mcd es %hu.\n\n", mcd);
    }while(1);
}
