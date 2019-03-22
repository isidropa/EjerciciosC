#include <stdio.h>
//Declaracion del tipo bool manualmente
enum bool {False, True};
enum bool esPerfecto(long);
void main()
{
    long a, b;
    puts("Numeros perfectos en el intervalo [a, b]");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    for(long i=a; a<b; a++)
        if(esPerfecto(a))
            printf("%d\n", a);
}

enum bool esPerfecto(long n)
{
    long suma=0;
    enum bool bool1;
    for(long i=1; i<n; i++)
        if(n%i == 0)
            suma += i;
    if(suma == n)
        return bool1 = True;
    else
        return bool1 = False;
}
