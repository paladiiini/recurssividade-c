#include <stdio.h>

int multiplicacaoEgipcia(a, b){

    if (a == 1){

        return b;

    } else if (a % 2 == 0){

        return multiplicacaoEgipcia(a / 2, b * 2);

    } else {

        return b + multiplicacaoEgipcia(a / 2, b * 2);

    }

}

int main(){

    int a, b;

    printf("\nDigite um número para multiplicarmos:\n");
    scanf("%d", &a);

    printf("\nDigite outro número para multiplicarmos:\n");
    scanf("%d", &b);

    printf("\nO resultado da multiplicação é: %d\n", multiplicacaoEgipcia(a, b));

}