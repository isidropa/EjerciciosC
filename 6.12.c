#include <stdio.h>
void main()
{
    for(int a=1; a<51; a++)
        for(int b=1; b<51; b++)
            for(int c=1; c<51; c++)
            {
                if(a*a + b*b == c*c)
                    printf("(%d, %d, %d)\n", a, b, c);
            }
}
