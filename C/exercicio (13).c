#include <stdio.h>
#include <string.h>

int pilha[100];
int i;

void criarpilha() {
    i = 0;
}

void push(int x) {
    pilha[i++] = x;
}

int pop() {
    return pilha[--i];
}

int abs() {
    int x, maior = 0, menor = 100, diferenca;
    for (x = 0; x < i; x++) {
        if (pilha[x] > maior) {
            maior = pilha[x];
        }
        if (pilha[x] < menor) {
            menor = pilha[x];
        }
        if (i > 2) {
            diferenca = maior - menor;
        }
        else {
            diferenca = 0;
        }
    }
    return diferenca;
}

int main(int argc, char const *argv[])
{
    char line[10], comando[4];
    int x, *p, diferenca;
    while (fgets(line, sizeof(line), stdin)) {
        sscanf(line, "%s ", comando);

        if (strcmp(comando, "push") == 0) {
            sscanf(line, "%s %d", comando, &x);
            push(x);
        }
        
        if (strcmp(comando, "pop") == 0) {
            p = &pilha[i];
            pop();
            printf("%d\n", *p);
        }

        if (strcmp(comando, "abs") == 0) {
            diferenca = abs();
            printf("%d\n", diferenca);
        }
    }
    return 0;
}