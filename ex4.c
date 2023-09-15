#include <stdio.h>
#include <locale.h>

int MDC(x, y){

    if (y == 0){

        return x;

    } else if (y > 0){

        return MDC(y, x % y);

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x ,y;

    printf("\nInforme dois números para ser calculado o MDC:\n");
    scanf("%d %d", &x, &y);

    printf("\nO MDC de %d e %d é: %d\n", x, y, MDC(x, y));

}