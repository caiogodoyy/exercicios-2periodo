#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20
#define max_caracteres 10000
struct pilha
{
        char itens[max][max_caracteres];
        int topo;
};
void iniciarPilha(struct pilha *p)
{
	    p -> topo = -1;
}
int pilhaVazia(struct pilha *p)
{
        if (p -> topo == -1) {
                return 1;
        }
        else {
                return 0;
        }
}
int pilhaCheia(struct pilha *p) 
{
        if (p -> topo == max - 1) {
                return 1;
        }
        else {
                return 0;
        }
}
void push(struct pilha *p)
{
        if (pilhaCheia(p) == 1) {
                printf("FULL STACK");
        }
        else {
                p -> topo++;
                char entrada;
                int i = 0;
                for (;;) {
                        if (scanf("%c", &entrada) == EOF || entrada == '\n') {
                                break;
                        }
                        else {
                                p -> itens[p -> topo][i++] = entrada;
                        }
                }
        }
}
char pop(struct pilha *p)
{
        if (pilhaVazia(p) == 1) {
                printf("EMPTY STACK");
        }
        else {
                char condicao = 'N';
                for (int i = 0; i < max_caracteres; i++) {
                        if (p -> itens[p -> topo][i] == '(') {
                                for (int j = i+1; j < max_caracteres; j++) {
                                        if (p -> itens[p -> topo][j] == ')') {
                                                condicao = 'S';
                                                p -> itens[p -> topo][j] = 'a';
                                                p -> itens[p -> topo][i] = 'a';
                                                break;
                                        }
                                        else if (p -> itens[p -> topo][j] ==
                                        '(' || p -> itens[p -> topo][j] ==
                                        '{' || p -> itens[p -> topo][j] ==
                                        '}' || p -> itens[p -> topo][j] ==
                                        '[' || p -> itens[p -> topo][j] ==
                                        ']' || p -> itens[p -> topo][j] ==
                                        'a') {
                                                condicao = 'N';
                                        }
                                        else {
                                                break;
                                        }
                                }
                        }
                        else if (p -> itens[p -> topo][i] == '[') {
                                for (int j = i+1; j < max_caracteres; j++) {
                                        if (p -> itens[p -> topo][j] == ']') {
                                                condicao = 'S';
                                                p -> itens[p -> topo][j] = 'a';
                                                p -> itens[p -> topo][i] = 'a';
                                                break;
                                        }
                                        else if (p -> itens[p -> topo][j] ==
                                        '[' || p -> itens[p -> topo][j] ==
                                        '{' || p -> itens[p -> topo][j] ==
                                        '}' || p -> itens[p -> topo][j] ==
                                        '(' || p -> itens[p -> topo][j] ==
                                        ')' || p -> itens[p -> topo][j] ==
                                        'a') {
                                                condicao = 'N';
                                        }
                                        else {
                                                break;
                                        }
                                }
                        }
                        else if (p -> itens[p -> topo][i] == '{') {
                                for (int j = i+1; j < max_caracteres; j++) {
                                        if (p -> itens[p -> topo][j] == '}') {
                                                condicao = 'S';
                                                p -> itens[p -> topo][j] = 'a';
                                                p -> itens[p -> topo][i] = 'a';
                                                break;
                                        }
                                        else if (p -> itens[p -> topo][j] ==
                                        '{' || p -> itens[p -> topo][j] ==
                                        '(' || p -> itens[p -> topo][j] ==
                                        ')' || p -> itens[p -> topo][j] ==
                                        '[' || p -> itens[p -> topo][j] ==
                                        ']' || p -> itens[p -> topo][j] ==
                                        'a') {
                                                condicao = 'N';
                                        }
                                        else {
                                                break;
                                        }
                                }
                        }
                        else if (p -> itens[p -> topo][i] == '}'
                        || p -> itens[p -> topo][i] == ')'
                        || p -> itens[p -> topo][i] == ']') {
                                condicao = 'N';
                                break;
                        }
                        else if (p -> itens[p -> topo][i] == 'a') {
                        }
                        else {
                                break;
                        }
                        if (condicao == 'N') {
                                break;
                        }
                }
                p -> topo--;
                return condicao;
        }
}
int main(int argc, char const *argv[])
{
        struct pilha *p = (struct pilha*)malloc(sizeof(struct pilha));
        iniciarPilha(p);
        int numEntradas, i;
        scanf("%d ", &numEntradas);
        char saidas[numEntradas];
        char j[max_caracteres];
        for (i = 0; i < numEntradas; i++) {
                push(p);
        }
        for (i = 0; i < numEntradas; i++) {
                saidas[i] = pop(p);
        }
        for (i = 1; i <= numEntradas; i++) {
                printf("%c\n", saidas[numEntradas - i]);
        }
        free(p);
        return 0;
}