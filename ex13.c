#include <stdio.h>

int eArmstrong(a){

    int b = 0, c = a;

    while (c > 0){

        b = b + (c % 10) * (c % 10) * (c % 10);
        c = c / 10;

    }

    if (a == b){

        return 1;

    } else {

        return 0;

    }

}

int main(){

    int a;

    printf("\nDigite um número para verificarmos se é Armstrong:\n");
    scanf("%d", &a);

    if(eArmstrong(a) == 1){

        printf("\nO número %d é Armstrong.\n", a);

    } else {

        printf("\nO número %d não é Armstrong.\n", a);

    }

}