#include <stdio.h>
#include <locale.h>

int russa(a, b){

    if (a == 1){

        return b;

    } else if ((a > 1) && (a % 2 == 0)){

        return russa(a / 2, b * 2);

    } else if ((a > 1) && (a % 2 != 0)){

        return b + russa(a / 2, b * 2);

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int a, b;

    printf("\nInforme dois números:\n");
    scanf("%d %d", &a, &b);

    printf("\nO resultado é: %d\n", russa(a, b));

}