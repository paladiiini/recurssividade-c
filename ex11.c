#include <stdio.h>

ePalindromo(a){

    if (a < 10){

        return 1;

    } else if (a % 10 == 0){

        return 0;

    } else {

        int b = 0;

        while (a > b){

            b = b * 10 + a % 10;
            a = a / 10;

        }

        if (a == b){

            return 1;

        } else {

            return 0;

        }

    }
    
}

int main(){

    int a;

    printf("\nDigite um número para verificarmos se é palíndromo:\n");
    scanf("%d", &a);

    if(ePalindromo(a) == 1){

        printf("\nO número %d é palíndromo.\n", a);

    } else {

        printf("\nO número %d não é palíndromo.\n", a);

    }

}