#include <stdio.h>
#include <locale.h>

int ePrimo(a, b){

    if (b == 1){

        return 1;

    } else if (a % b == 0){

        return 0;

    } else {

        return ePrimo(a, b - 1);

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int a, b;

    printf("\nDigite um número para verificarmos se é primo:\n");
    scanf("%d", &a);

    printf("\nDigite um divisor para verificarmos se é divisor do número digitado:\n");
    scanf("%d", &b);

    printf("O número %d é primo? %d\n", a, ePrimo(a, b));

}