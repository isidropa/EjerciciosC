#include <stdio.h>
void main()
{
    for(long a=1; a<51; a++)
        for(long b=1; b<51; b++)
            for(long c=1; c<51; c++)
            {
                if(a*a + b*b == c*c)
                    printf("(%d, %d, %d)\n", a, b, c);
            }
}
