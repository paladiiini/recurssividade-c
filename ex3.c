#include <stdio.h>
#include <locale.h>

int ocorr(int k, int n) {

    if (n == 0 && k != 0) {

        return 0;

    } else if (n % 10 == k) {

        return 1 + ocorr(k, n / 10);

    } else {
        
        return ocorr(k, n / 10);
    }
}


int main(){

    int k, n;

    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme qual número você quer que seja contado as ocorrências:\n");
    scanf("%d", &k);
    printf("\nInforme o valor máximo para ser contado:\n");
    scanf("%d", &n);

    printf("\nO número %d ocorre %d vezes em %d\n", k, ocorr(k, n), n);

}