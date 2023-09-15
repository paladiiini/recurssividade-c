#include <stdio.h>
#include <locale.h>

int mult(x, y){

    int result = 0;

    if (y == 0){
        return 0;

    }else if(y > 0){
    
    return (x + mult(x, y - 1));

    }

}

int main(){

    int x, y;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme dois números para serem multiplicados:\n");
    scanf("%d %d", &x, &y);

    printf("\nA multiplicação de %d * %d é: %d\n", x, y, mult(x, y));

}