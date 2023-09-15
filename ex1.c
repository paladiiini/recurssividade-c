#include <stdio.h>
#include <locale.h>

int sucessor(a){

    return a + 1;

}

int antecessor(a){

    return a - 1;

}

int soma(x, y){

    if (y == 0){
        return x;

}else if(y > 0){
    
    return soma(sucessor(x), antecessor(y));

}

}

int main(){

    int x, y;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme dois números para serem somados:\n");
    scanf("%d %d", &x, &y);

    printf("\nA soma de %d + %d é: %d\n", x, y, soma(x, y));

}