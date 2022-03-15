#include <stdio.h>
int main(int argc, char const *argv[])
{
        int i, x, n;
        scanf("%d", &n);
        int matriz[n][n];
        for (i = 0; i < n; i++) {
                for (x = 0; x < n; x++) {
                        scanf("%d", &matriz[i][x]);
                }
        }
        int maior_quadrado = 0, area, j = 0, y, cond;
        for (i = 0; i < n; i++) {
                for (x = 0; x < n; x++) {
                        if (matriz[i][x] == 1) {
                                j = 1, cond = 1;
                                while (matriz[i][x + j] == 1 &&
                                matriz[i + j][x + j] == 1
                                && matriz[i + j][x] == 1) {
                                        for (y = 1; y < j; y++) {
                                                if (matriz[i+j-y][x+j] == 0
                                                || matriz[i+j][x+j-y] == 0) {
                                                        cond = 0;
                                                        break;
                                                }
                                        }
                                        if (cond == 0) {
                                                break;
                                        }
                                        j++;
                                }
                        }
                        area = j * j;
                        if (maior_quadrado < area) {
                                maior_quadrado = area;
                        }
                }
        }
        printf("%d", maior_quadrado);
        return 0;
}