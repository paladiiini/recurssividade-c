#include <stdio.h>
#include <locale.h>

int proxPrimo(p){

    int i, j, cont = 0;

    for (i = 1; i <= p; i++){

        for (j = 1; j <= i; j++){

            if (i % j == 0){

                cont++;

            }

        }

        if (cont == 2){

            return i;

        }

        cont = 0;

    }

}

int MMC(x, y, p){

    if (x == 1 && y ==1){

        return 1;

    } else if ((x%p == 0) && (y%p == 0)){

        

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x, y, p;

    printf("\nInforme dois números para ser calculado o MMC:\n");
    scanf("%d %d", &x, &y);

    printf("\nInforme um número primo:\n");
    scanf("%d", &p);

    printf("\nO MMC de %d e %d é: %d\n", x, y, MMC(x, y));

}