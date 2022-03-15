#include <stdio.h>

int main(int argc, char const *argv[])
{
    int linhas, colunas, i, x, z, tamanhoLista, condicao;

    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    for (i = 0; i < linhas; i++) {
        for (x = 0; x < colunas; x++) {
            scanf("%d", &matriz[i][x]);
        }
    }

    scanf("%d", &tamanhoLista);
    int lista[tamanhoLista];

    for (i = 0; i < tamanhoLista; i++) {
        scanf("%d", &lista[i]);
    }

    for (z = 0; z < tamanhoLista; z++) {
        condicao = 0;
        
        for (i = 0; i < linhas; i++) {
            if (lista[z] <= matriz[i][colunas-1]) {
                for (x = 0; x < colunas; x++) {
                    if (lista[z] == matriz[i][x]) {
                        printf("YES WITH %d AND %d\n", i+1, x+1);
                        condicao = 1;
                        break;
                    }
                }
                break;
            }
        }
        if (condicao == 0) {
            printf("NO\n");
        }
    }

    return 0;
}