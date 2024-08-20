

    //tipo da arvore bin�ria
    struct arv{
    char info;
    struct arv *esq;
    struct arv *dir;
    };
    typedef struct arv Arv;

    //fun��o para criar uma �rvore vazia
    Arv *criaVazia();

    //fun��o que cria �rvore cheia
    Arv* criaCheia(char c, Arv* sae, Arv* sad);

    //fun��o que retorna a quantidade de n�s de uma �rvore bin�ria
    int nos(Arv *a);

    // fun��o que retorna a quantidade de folhas da �rvore
    int folhas(Arv *a);

    //fun��o do filho �nico, se a �rvore tem apenas 1 filho
    int um_filho(Arv *a);
