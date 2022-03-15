#include <stdio.h>

int main(int argc, char const *argv[])
{
    int testes, i, qnt;
    char tipo;
    float total = 0, coelhos = 0, ratos = 0, sapos = 0, porcentagem;

    scanf("%d", &testes);

    for (i = 0; i < testes; i++) {
        scanf("%d %c", &qnt, &tipo);
        total = total + qnt;
        if (tipo == 'C') {
            coelhos = coelhos + qnt;
        }
        if (tipo == 'S') {
            sapos = sapos + qnt;
        }
        if (tipo == 'R') {
            ratos = ratos + qnt;
        }
    }

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelhos);
    printf("Total de ratos: %.0f\n", ratos);
    printf("Total de sapos: %.0f\n", sapos);
    porcentagem = (coelhos / total) * 100;
    printf("Percentual de coelhos: %.2f %\n", porcentagem);
    porcentagem = (ratos / total) * 100;
    printf("Percentual de ratos: %.2f %\n", porcentagem);
    porcentagem = (sapos / total) * 100;
    printf("Percentual de sapos: %.2f %\n", porcentagem);

    return 0;
}
