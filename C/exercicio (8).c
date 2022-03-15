#include <stdio.h>

int main(int argc, char const *argv[])
{
    int linhas, colunas, i, z, num, x = 0, y = 0, diagonal = 0, d1 = 0, d2 = 0, menor = 0, maior = 0;
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    if (linhas == colunas) {
        diagonal = 1;
    }
    
    int loop = linhas * colunas;

    for (z = 0; z<linhas; z++) {
        for (i = 0; i<colunas; i++) {
        scanf("%d", &num);
        matriz[x][y] = num;

        if (x == y) {
            d1 = d1 + num;
        }
        if (x+1 + y+1 == linhas + 1) {
            d2 = d2 + num;
        }

        if (num>0) {
            maior++;
        }
        if (num<0) {
            menor++;
        }
        
        y++;
        }
        y = 0;
        x++;
    }

    x = 0, y = 0;
    printf("Matriz formada:\n");
    for (z = 0; z<linhas; z++) {
        for (i = 0; i<colunas; i++) {
        printf("%d", matriz[x][y]);
        if (y < colunas-1) {
            printf(" ");
        }
        y++;
        }
        printf("\n");
        y = 0;
        x++;
    }

    if (diagonal == 1) {
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", d1, d2);
    }
    else {
        printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    }

    printf("A matriz possui %d numero(s) menor(es) que zero.\n", menor);
    printf("A matriz possui %d numero(s) maior(es) que zero.\n", maior);

    return 0;
}