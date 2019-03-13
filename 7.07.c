#include <stdio.h>
void factorizar(long n)
{
    int cont=0, ant=2;
    long i;
    if(n <= 0) {
        printf("\xAD Error! %ld no se puede factorizar", n);
        return;
    }
    else if(n == 1) { printf("1\n"); return; }
    for(i=2; i<=n; i++) {
        if(n%i == 0) {
            n /= i;
            if(i == ant) { cont++; i--; }
        }
        else {
            if(cont == 0) { ant = i; ant++; }
            else if(i == ant) {
                printf("%ld^%d\n", i, cont);
                ant++;
                cont=0;
            }
        }
    }
    printf("%ld^%d\n", i, cont);
}

void main()
{
    long num;
    printf("Factorizacion del numero... ");
    scanf("%ld", &num);

    factorizar(num);
}
