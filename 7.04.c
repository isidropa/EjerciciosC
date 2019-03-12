#include <stdio.h>
//Declaracion del tipo bool manualmente
enum bool {False, True};
enum bool esPerfecto(unsigned long);
void main()
{
    unsigned long a, b;
    puts("Numeros perfectos en el intervalo [a, b]");
    printf("a: "); scanf("%lu", &a);
    printf("b: "); scanf("%lu", &b);
    for(unsigned long i=a; a<b; a++)
        if(esPerfecto(a))
            printf("%lu\n", a);
}

enum bool esPerfecto(unsigned long n)
{
    unsigned long suma=0;
    enum bool bool1;
    for(unsigned long i=1; i<n; i++)
        if(n%i == 0)
            suma += i;
    if(suma == n)
        return bool1 = True;
    else
        return bool1 = False;
}
