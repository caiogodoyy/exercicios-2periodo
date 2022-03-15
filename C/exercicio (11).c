#include <stdio.h>
int multiplicacao(int c, int p)
{
        if (c == 0 || p == 0) {
                return 0;
        }
        else if (c == 1) {
                return p;
        }
        else {
                return p + multiplicacao(c - 1, p);
        }
}
int main(int argc, char const *argv[])
{
        int c, m, p;
        while (scanf("%d %d %d", &c, &m, &p) != EOF) {
                if (multiplicacao(c, p) <= m) {
                        printf("Sim\n");
                }
                else {
                        printf("Nao\n");
                }
        }
        return 0;
}