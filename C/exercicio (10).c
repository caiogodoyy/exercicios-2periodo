#include <stdio.h>
int matriz[3][3];
void teste()
{
        if (matriz[2][0] == 0 && matriz[2][1] == 0 && matriz[1][0] == 0) {
                printf("Por baixo\n");
        }
        else if (matriz[0][2] == 0 && matriz[0][1] == 0 && matriz[1][2] == 0) {
                printf("Por cima\n");
        }
        else {
                printf("Nao pode atravessar\n");
        }
}
int main(int argc, char const *argv[])
{
        int i, x, linhas = 3, colunas = 3, j;
        while (scanf("%d", &j) != EOF) {
                for (i = 0; i < linhas; i++) {
                        for (x = 0; x < colunas; x++) {
                                if (i == 0 && x == 0) {
                                        matriz[i][x] = j;
                                }
                                else {
                                        scanf("%d", &matriz[i][x]);
                                }
                        }
                }
                teste();
        }
        return 0;
}