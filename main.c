#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "lib.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

        Arv *raiz = criaCheia('A',
                    criaCheia('B',
                    criaVazia(),
                    criaCheia('D', criaVazia(), criaVazia())),
                    criaCheia('C',
                    criaVazia(),
                    criaCheia('E', criaVazia(), criaVazia())));

    // Chamadas das funções e amostra do resultado
    printf("a árvore tem %d nós \n", nos(raiz));
    printf("a árvore tem %d folhas %d\n", folhas(raiz));
    printf("quantidade de nós com apenas um filho: %d\n", um_filho(raiz));
}
