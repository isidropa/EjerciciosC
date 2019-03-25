#include <stdio.h>
void factorizar (long n) {
    long cont=0;
    if(n <= 0) {
        printf("\xAD Error! %ld no se puede factorizar", n);
        return;
    }
    else if(n == 1) { printf("1\n"); return; }
    for(long i=2; i<=n; i++) {
        cont=0;
        while (n%i == 0) {
            ++cont;
            n/=i;
        }
        if (cont>0)
            printf("%ld^%d\n", i, cont);
    }
}

void main()
{
    long num;
    printf("Factorizacion del numero... ");
    scanf("%ld", &num);

    factorizar(num);
}
