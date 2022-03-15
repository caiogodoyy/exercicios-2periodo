#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numPrincesas, numEleitores, i, x, num;
    scanf("%d", &numPrincesas);
    scanf("%d", &numEleitores);

    int votos[numEleitores][numPrincesas];
    int princesas[numPrincesas];

    for (x = 0; x < numPrincesas; x++) {
            princesas[x] = 0;
        }

    for (i = 0; i < numEleitores; i++) {
        for (x = 0; x < numPrincesas; x++) {
            scanf("%d", &votos[i][x]);
        }
    }

    for (i = 0; i < numEleitores; i++) {
        for (x = 0; x < numPrincesas; x++) {
            princesas[x] = princesas[x] + votos[i][x];
        }
    }
    
    for (i = 0; i < numPrincesas; i++) {
        printf("Princesa %d: %d voto(s)\n", i+1, princesas[i]);
    }

    return 0;
}