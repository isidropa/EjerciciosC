#include <stdio.h>
void main()
{
    long m2[3][4], m1[3][4] = { {1, 2, 7, 7},
                                {8, 4, 5, 5},
                                {6, 3, 8, 6}  };
    long cF=0,cC=0;
    //Introducir valores pares de m1 en m2
    for(long i=0; i<3; i++)
        for(long j=0; j<4; j++)
            if(m1[i][j]%2 == 0)
            {
                m2[cF][cC++] = m1[i][j];
                if(cC > 3)
                {
                    cF++;
                    cC=0;
                }
            }
    //Introducir valores impares de m1 en m2
    for(long i=0; i<3; i++)
        for(long j=0; j<4; j++)
            if(m1[i][j]%2 > 0)
            {
                m2[cF][cC++] = m1[i][j];
                if(cC > 3)
                {
                    cF++;
                    cC=0;
                }
            }
    //Imprimir m2
    for(long i=0; i<3; i++)
        {
        for(long j=0; j<4; j++)
            printf(" %d", m2[i][j]);
        printf("\n");
        }
}
