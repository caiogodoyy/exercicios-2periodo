#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
#define max_caracteres 10000
struct pilha
{
		float itens[max][max_caracteres];
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
				float i[max_caracteres] = {};
    			int x = 0;
				char fim;
				for (;;) {
						scanf("%f", &i[x++]);
      					if (scanf("%c", &fim) == EOF) {
				        		break;
      					}
						if (fim == '\n') {
								break;
						}
				}
				p -> topo++;
				for (int j = 0; j < x; j++) {
						p -> itens[p -> topo][j] = i[j];
				}
    			for (int j = x; j < max_caracteres; j++) {
      					p -> itens[p -> topo][j] = 1.5;
    			}
		}
}
void pop(struct pilha *p)
{
		if (pilhaVazia(p) == 1) {
				printf("EMPTY STACK");
		}
		else {
				for (int j = 0; j < max_caracteres; j++) {
						if (p -> itens[p -> topo][j] == 1.5) {
								break;
						}
						printf("%.0f", p -> itens[p -> topo][j]);
						if (p -> itens[p -> topo][j + 1] != 1.5) {
								printf(" ");
						}
				}
				for (int j = 0; j < max_caracteres; j++) {
						if (p -> itens[p -> topo][j] == 1.5) {
								break;
						}
						p -> itens[p -> topo][j] = 1.5;
				}
				p -> topo--;
		}
}
int main(int argc, char const *argv[])
{
		struct pilha *p = (struct pilha*)malloc(sizeof(struct pilha));
    	iniciarPilha(p);
    	int i, condicao = 0;
    	char comando[4], fim;
    	while (scanf("%s", comando) != EOF) {
	        	if (strcmp(comando, "PUSH") == 0) {
						push(p);
        		}
        		else if (strcmp(comando, "POP") == 0 || 
				strcmp(comando, "pop") == 0) {
						condicao = 1;
						pop(p);
						printf("\n");
    	    	}
    	}
    	if (condicao == 0) {
	      		printf("SEM RESPOSTA");
    	}
		free(p);
		return 0;
}