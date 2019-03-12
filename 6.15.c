#include <stdio.h>>
void main()
{
    short trigger=1, cont=0;
    long num, suma=0;
    puts("\tSuma de numeros primos");

    do
    {
        printf("n%d: ", trigger); scanf("%d", &num);
        for(long i=1; i<=num; i++)
            if(num%i == 0)
                cont++;
        if(cont > 2)
        {
            printf("La suma es %d", suma);
            trigger = -1;
        }
        else
        {
            suma += num;
            trigger++;
            cont = 0;
        }
    }while(trigger != -1);
}
