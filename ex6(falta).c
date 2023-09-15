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

    printf("\nInforme de qual altura a bola foi largada:\n");
    scanf("%d", &h);

}