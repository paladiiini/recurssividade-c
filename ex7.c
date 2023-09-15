#include <stdio.h>
#include <locale.h>

int hs(n){

    if (n == 1){

        return 1;

    } else if (n % 2 == 0){

        return n + hs(n/2);

    } else if (n % 2 != 0){

        return n + hs(3 * n + 1);

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("\nInforme um número:\n");
    scanf("%d", &n);

    printf("\nO resultado é: %d\n", hs(n));

}