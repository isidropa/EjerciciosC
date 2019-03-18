#include <stdio.h>
void main()
{
    char cad[80];
    short i, voc[5]={0};
    puts("Proporcioname una cadena de texto:");
    gets(cad);
    //scanf("%s", cad);
    for(i=0; cad[i]; i++) //cad[i] => cad[i] != '\0'
    {
        //printf("%c", cad[i]);
        switch(tolower(cad[i]))
        {
        case 'a':
            voc[0]++; break;
        case 'e':
            voc[1]++; break;
        case 'i':
            voc[2]++; break;
        case 'o':
            voc[3]++; break;
        case 'u':
            voc[4]++; break;
        }
    }
    printf("a=%d\ne=%d\ni=%d", voc[0], voc[1], voc[2]);
    printf("\no=%d\nu=%d", voc[3], voc[4]);
}
