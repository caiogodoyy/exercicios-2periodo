#include <stdio.h>
#include <stdlib.h>
#define MAX 999

struct no
{
    int conteudo;
    struct no *esq, *dir;
};

struct arv
{
    struct no *raiz;
};

void inserir_esq(struct no *no, int valor)
{
    if (no -> esq == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo -> conteudo = valor;
        novo -> esq = NULL;
        novo -> dir = NULL;
        no -> esq = novo;
    }
    else {
        if (valor < no -> esq -> conteudo) {
            inserir_esq(no -> esq, valor);
        }
        else if (valor > no -> dir -> conteudo){
            inserir_dir(no -> dir, valor);
        }
    }
}
void inserir_dir(struct no *no, int valor)
{
    if (no -> dir == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo -> conteudo = valor;
        novo -> esq = NULL;
        novo -> dir = NULL;
        no -> dir = novo;
    }
    else {
        if (valor > no -> dir -> conteudo) {
            inserir_dir(no -> dir, valor);
        }
        else if (valor < no -> esq -> conteudo){
            inserir_esq(no -> esq, valor);
        }
    }
}

void inserir(struct arv *arv, int valor)
{
    if(arv->raiz == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo -> conteudo = valor;
        novo -> esq = NULL;
        novo -> dir = NULL;
        arv -> raiz = novo;
    }
    else {
        if (valor < arv -> raiz -> conteudo) {
            inserir_esq(arv -> raiz, valor);
        }
        else if (valor > arv -> raiz -> conteudo){
            inserir_dir(arv -> raiz, valor);
        }
    }
}

int main(int argc, char const *argv[])
{
    int valor;
    struct arv arv;
    arv.raiz = NULL;
    
    return 0;
}