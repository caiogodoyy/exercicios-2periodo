#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 999
#define max_valor 5

struct no {
    int conteudo;
    struct no *esquerda;
    struct no *direita;
    struct no *pai;
};

struct no* criar_arvore(int valor, struct no* anterior)
{
    struct no *raiz = (struct no*)malloc(sizeof(struct no));
    raiz -> conteudo = valor;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;
    raiz -> pai = anterior;
    return raiz;
}

struct no* inserir(struct no* arvore, int valor, int lado, struct no* anterior)
{
    if (arvore == NULL) {
        arvore = criar_arvore(valor, anterior);
    } 
    else {
        if (lado == 0) {
            arvore -> esquerda = inserir(arvore -> esquerda, valor, lado, anterior);
            arvore -> esquerda -> pai = arvore;
        }
        else if (lado == 1) {
            arvore -> direita = inserir(arvore -> direita, valor, lado, anterior);
            arvore -> direita -> pai = arvore;       
        }
    }
    return arvore;
}

int buscar(struct no *raiz, int valor, int posicao)
{
    if (raiz != NULL) {
        if (raiz -> conteudo != valor) {
            posicao++;
            buscar(raiz -> esquerda, valor, posicao);
            buscar(raiz -> direita, valor, posicao);
        }
        else {
            printf("ESTA NA ARVORE\n%d", posicao);
            return 1;
        }
    }
    else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    struct no *raiz = NULL, *aux, *anterior = NULL;
    char entrada[max], num[max_valor];
	int lado = 0, numero, j = 0, posicao = 1, condicao = 0;
	fgets(entrada, max, stdin);
	for(int i = 0, y; i < strlen(entrada); i++) {
		if (entrada[i] == '(') {
			y = i + 1;
            int x = 0;
			while(entrada[y] != '(' && entrada[y] != ')') {
				num[x] = entrada[y];
				y++, x++;
			}
			if (entrada[i - 1] == ')') {
				//direita
				lado = 1;
			}
			else {
				//esquerda
				lado = 0;
			}
            if (num[0] != '\0') {
                numero = atoi(num);
                raiz = inserir(raiz, numero, lado, anterior);
                anterior = raiz;
                if (j == 0) {
                    aux = raiz;
                } j++;
                if (y == '(' && y+1 == ')' && y+2 == '(' && y+3 == ')') {
                    raiz = raiz -> pai;
                    condicao++;
                }
            }
            for (int j = 0; j < max_valor; j++) {
                num[j] = '\0';
            }
            if (condicao == 2) {
                raiz = aux;
                condicao = 0;
            }
		}
	}

    scanf("%d", &numero);
    if (buscar(aux, numero, posicao) == 0) {
        printf("NAO ESTA NA ARVORE\n-1");
    }

    return 0;
}