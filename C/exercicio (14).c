#include <stdio.h>
#include <string.h>
#define max 50
struct carta
{
        char nome[max];
        int quant_poderes;
        int poderes[max];
        char proximo[max];
};
int main(int argc, char const *argv[])
{
        int num_cartas;
        scanf("%d ", &num_cartas);
        int i, x, y, retorno;
        struct carta carta[num_cartas];
        for (i = 0; i < num_cartas; i++) {
                gets(carta[i].nome);
                scanf("%d ", &carta[i].quant_poderes);
                for (x = 0; x < carta[i].quant_poderes; x++) {
                        scanf("%d ", &carta[i].poderes[x]);
                }
                for (y = carta[i].quant_poderes; y < max;) {
                        for (x = 0; x < carta[i].quant_poderes; x++, y++) {
                                if (y == max) {
                                        break;
                                }
                                carta[i].poderes[y] = carta[i].poderes[x];
                        }
                }
                gets(carta[i].proximo);
                if (i > 0) {
                        y = i;
                        for (x = y - 1; x >= 0; --x, --y) {
                                retorno = strcmp(carta[y].nome, carta[x].nome);
                                if (retorno < 0) {
                                        struct carta *p1 = &carta[y];
                                        struct carta *p2 = &carta[x];
                                        struct carta copia;
                                        copia = *p1;
                                        *p1 = *p2;
                                        *p2 = copia;
                                }
                        }
                }
        }
        char cartaSorteada[max];
        gets(cartaSorteada);
        for (i = 0, x = 0; i < num_cartas; i++) {
                if ((strcmp(cartaSorteada, carta[i].nome) == 0)) {
                        printf("%d\n", i);
                        printf("%d\n", carta[i].poderes[x]);
                        x++;
                        break;
                }
        }
        int j;
        for (y = 0; y < num_cartas - 1; y++) {
                for (j = 0; j < num_cartas; j++) {
                        if ((strcmp(carta[i].proximo, carta[j].nome) == 0)) {
                                printf("%d\n", j);
                                printf("%d\n", carta[j].poderes[x]);
                                x++;
                                i = j;
                                break;
                        }
                }
        }
        return 0;
}