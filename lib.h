

    //tipo da arvore binária
    struct arv{
    char info;
    struct arv *esq;
    struct arv *dir;
    };
    typedef struct arv Arv;

    //função para criar uma árvore vazia
    Arv *criaVazia();

    //função que cria árvore cheia
    Arv* criaCheia(char c, Arv* sae, Arv* sad);

    //função que retorna a quantidade de nós de uma árvore binária
    int nos(Arv *a);

    // função que retorna a quantidade de folhas da árvore
    int folhas(Arv *a);

    //função do filho único, se a árvore tem apenas 1 filho
    int um_filho(Arv *a);
