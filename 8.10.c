#include <stdio.h>
#include <stdlib.h>
void main()
{
    srand(time(NULL));
    int si=0,c=0, v[20], v2[20][2]={0};

    printf("\tAgrupador de valores aleatorios\nValores: ");
    for(int i=0; i<20; i++){
        v[i] = rand() % 25 + 1;
        printf("%d ", v[i]);
    }
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++)
            if(v2[j][0] == v[i]){
                v2[j][1]++;
                si = 1;
            }
        if(si)
            si=0;
        else{
            v2[c][0] = v[i];
            v2[c][1]++;
            c++;
        }
    }
    printf("\nValores repetidos: ");
    for(int i=0; v2[i][0] > 0; i++)
        if(v2[i][1] > 1)
            printf("\n %2d -> %2d veces", v2[i][0], v2[i][1]);
}
