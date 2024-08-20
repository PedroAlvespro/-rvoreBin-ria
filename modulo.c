#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

    //vazia
    Arv *criaVazia(){
    return NULL;
    }

    //Cheia
    Arv* criaCheia(char c, Arv* sae, Arv* sad){
    Arv* p= (Arv*)malloc(sizeof(Arv));
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
    }

     //fun��o que retorna a quantidade de n�s de uma �rvore bin�ria
    int nos(Arv *a) {
    if (a == NULL) {
        return 0;
    }
    return 1 + nos(a->esq) + nos(a->dir);
    }

     // fun��o que retorna a quantidade de folhas da �rvore
    int folhas(Arv *a) {
    if (a == NULL) {
        return 0;
    }
    if (a->esq == NULL && a->dir == NULL) {
        return 1;
    }
    return folhas(a->esq) + folhas(a->dir);
    }

    // fun��o que retorna se a �rvore tem mais de um filho
    int um_filho(Arv *a) {
    if (a == NULL) {
        return 0;
    }
    int ehUmFilho = (a->esq == NULL && a->dir != NULL) || (a->esq != NULL && a->dir == NULL);
    return ehUmFilho + um_filho(a->esq) + um_filho(a->dir);
    }
