#include <stdio.h>
#include <locale.h>

int perc(h, r){

    if (h == 0){

        return 0;

    } else if (h > 0){

        return h + (h * r) + perc(h * r, r );

    }

}

int main(){

    setlocale(LC_ALL,"Portuguese");

    int h, r;

    printf("\nInforme de qual altura em metros a bola foi largada:\n");
    scanf("%d", &h);

    printf("\nInforme a taxa de recuo da bola:\n");
    scanf("%d", &r);

    printf("\nA bola percorreu %d metros.\n", perc(h, r));

}