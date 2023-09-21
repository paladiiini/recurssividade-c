#include <stdio.h>

int inverteNumero(x){

    // se o numero for 123, tem que retornar 321

    if (x == 0){

        return 0;

    } else {
        
        printf("%d", x % 10);
        x = x / 10;
        return inverteNumero(x);

    }

}

int main(){

    int a;

    printf("\nDigite um número para ser invertido:\n");
    scanf("%d", &a);

    inverteNumero(a);

}