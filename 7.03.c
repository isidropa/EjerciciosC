#include <stdio.h>
unsigned long fibonacci(unsigned short);
void main()
{
    unsigned short num;
    printf("Termino n de la serie de Fibonacci: ");
    scanf("%hu", &num);

    printf("n->%hu: %lu", num, fibonacci(num));
}

unsigned long fibonacci(unsigned short n)
{
    unsigned long ant=0, act=1, aux;
    if(n == 0)      return 0;
    else if(n == 1) return 1;
    else
    {
        for(int i=1; i<n; i++)
        {
            aux = ant;
            ant = act;
            act = act + aux;
        }
        return act;
    }
}
