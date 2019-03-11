#include <stdio.h>
void main()
{
    for(int i=0; i<11; i++)
        for(int j=0; j<11; j++)
        {
            if(i%2 == 0)
            {
                if(j%2 > 0)
                    printf("(%d, %2d)\n", i, j);
            }
            else if(i%2 > 0)
            {
                if(j%2 == 0)
                    printf("\t(%d, %2d)\n", i, j);
            }
        }
}
