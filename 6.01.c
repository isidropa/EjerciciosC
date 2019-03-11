#include <stdio.h>
void main()
{
    int num;
    printf("Tabla de multiplicar del numero: ");
    scanf("%d", &num);

    for(int i=0; i<11 ; i++)
        printf("%d x %2d = %2d\n", num, i, num*i);
}
