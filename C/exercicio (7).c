#include <stdio.h>
#include <stdlib.h>

struct no {
    int conteudo;
    struct no *esq, *dir;
    int altura;
};

struct arv{
    struct no *raiz;
};

int maior_altura(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int altura_no(struct no *no)
{
    if (no == NULL)
        return -1;
    else
        return no -> altura;
}

int fb(struct no *no)
{
    if (no)
        return (altura_no(no -> esq) - altura_no(no -> dir));
    else
        return 0;
}

struct no* rotacao_esq(struct no *raiz)
{
    struct no *aux, *filho;

    aux = raiz -> dir;
    filho = aux -> esq;
    aux -> esq = raiz;
    raiz -> dir = filho;

    raiz -> altura = maior_altura(altura_no(raiz -> esq), altura_no(raiz -> dir) + 1);
    aux -> altura = maior_altura(altura_no(aux -> esq), altura_no(aux -> dir) + 1);
    return aux;
}

struct no* rotacao_dir(struct no *raiz)
{
    struct no *aux, *filho;

    aux = raiz -> esq;
    filho = aux -> dir;
    aux -> dir = raiz;
    raiz -> esq = filho;
    
    raiz -> altura = maior_altura(altura_no(raiz -> esq), altura_no(raiz -> dir) + 1);
    aux -> altura = maior_altura(altura_no(aux -> esq), altura_no(aux -> dir) + 1);
    return aux;
}

struct no* rotacao_dir_esq(struct no *raiz)
{
    raiz->dir = rotacao_dir(raiz->dir);
    return rotacao_esq(raiz);
}

struct no* rotacao_esq_dir(struct no *raiz)
{
    raiz->esq = rotacao_esq(raiz->esq);
    return rotacao_dir(raiz);
}

void inserir_esq(struct no *no, int valor) {
    if (no->esq == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo->conteudo = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        novo->altura = 0;
        no->esq = novo;
    } else {
        if (valor < no->esq->conteudo)
            inserir_esq(no->esq, valor);
        if (valor > no->esq->conteudo)
            inserir_dir(no->esq, valor);
    }
}

void inserir_dir(struct no *no, int valor) {
    if (no->dir == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo->conteudo = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        novo->altura = 0;
        no->dir = novo;
    } else {
        if (valor > no->dir->conteudo)
            inserir_dir(no->dir, valor);
        if (valor < no->dir->conteudo)
            inserir_esq(no->dir, valor);
    }
}

void inserir(struct arv *arv, int valor) {
    if (arv->raiz == NULL) {
        struct no *novo = (struct no*)malloc(sizeof(struct no));
        novo->conteudo = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        novo->altura = 0;
        arv->raiz = novo;
    } else {
        if (valor < arv->raiz->conteudo) {
            inserir_esq(arv->raiz, valor);
            if (fb(arv->raiz) > 1) {
                if (valor < arv->raiz->esq->conteudo)
                    arv->raiz = rotacao_dir(arv->raiz);
                else
                    arv->raiz = rotacao_esq_dir(arv->raiz);
            }
        }
        if (valor > arv->raiz->conteudo) {
            inserir_dir(arv->raiz, valor);
            if (fb(arv->raiz) < -1) {
                if (valor > arv->raiz->dir->conteudo)
                    arv->raiz = rotacao_esq(arv->raiz);
                else
                    arv->raiz = rotacao_dir_esq(arv->raiz);
            }
        }
    }
}

void print_arv(struct no *raiz) {
    if (raiz != NULL) {
        print_arv(raiz->esq);
        printf("%d|%d ", raiz->conteudo, raiz->altura);
        print_arv(raiz->dir);
    }
}

int main(int argc, char const *argv[]) {
    int valor;
    struct arv arv;
    arv.raiz = NULL;

    struct no *raiz = NULL;

    while (scanf("%d", &valor) != EOF)
        inserir(&arv, valor);
    print_arv(arv.raiz);
}