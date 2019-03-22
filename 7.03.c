#include <stdio.h>
long fibonacci(long);
void main()
{
    long num;
    printf("Termino n de la serie de Fibonacci: ");
    scanf("%d", &num);

    printf("n->%d: %d", num, fibonacci(num));
}

long fibonacci(long n)
{
    long ant=0, act=1, aux;
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
