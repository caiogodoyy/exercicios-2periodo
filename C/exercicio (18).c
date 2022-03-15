#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float valor;
    int x;
    scanf("%f", &valor);
    if (valor >= 100) {
        x = valor / 100;
        valor = valor - 100 * x;
        printf("%d nota(s) de R$ 100.00\n", x);
    }
    if (valor >= 50) {
        x = valor / 50;
        valor = valor - 50 * x;
        printf("%d nota(s) de R$ 50.00\n", x);
    }
    if (valor >= 20) {
        x = valor / 20;
        valor = valor - 20 * x;
        printf("%d nota(s) de R$ 20.00\n", x);
    }
    if (valor >= 10) {
        x = valor / 10;
        valor = valor - 10 * x;
        printf("%d nota(s) de R$ 10.00\n", x);
    }
    if (valor >= 5) {
        x = valor / 5;
        valor = valor - 5 * x;
        printf("%d nota(s) de R$ 5.00\n", x);
    }
    if (valor >= 2) {
        x = valor / 2;
        valor = valor - 2 * x;
        printf("%d nota(s) de R$ 2.00\n", x);
    }
    if (valor >= 1) {
        x = valor / 1;
        valor = valor - 1 * x;
        printf("%d moeda(s) de R$ 1.00\n", x);
    }

    valor = roundf(valor * 100) / 100;
    valor = valor * 100;

    if (valor >= 50) {
        x = valor / 50;
        valor = valor - 50 * x;
        printf("%d moeda(s) de R$ 0.50\n", x);
    }
    if (valor >= 25) {
        x = valor / 25;
        valor = valor - 25 * x;
        printf("%d moeda(s) de R$ 0.25\n", x);
    }
    if (valor >= 10) {
        x = valor / 10;
        valor = valor - 10 * x;
        printf("%d moeda(s) de R$ 0.10\n", x);
    }
    if (valor >= 5) {
        x = valor / 5;
        valor = valor - 5 * x;
        printf("%d moeda(s) de R$ 0.05\n", x);
    }
    if (valor >= 1) {
        x = valor / 1;
        valor = valor - 1 * x;
        printf("%d moeda(s) de R$ 0.01\n", x);
    }

    return 0;
}