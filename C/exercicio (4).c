#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qnt, i, total, xicaras;
    char tamanho;
    
    total = 0;
    for(i = 0; i<7; i++) {
        scanf("%d\n", &qnt);
        scanf(" %c", &tamanho);
        if (tamanho == 'p' || tamanho == 'P') {
            total = total + 10 * qnt;
        }
        if (tamanho == 'g' || tamanho == 'G') {
            total = total + 16 * qnt;
        }
    }
    xicaras = (total * 2) / 7;
    printf("%d\n%d", total, xicaras);
    
    return 0;
}