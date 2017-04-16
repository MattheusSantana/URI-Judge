#include <stdio.h>
#include <stdlib.h>

#define MAX_M 100

typedef struct Celula {
    int chave;
    struct Celula *prox;
} Celula;


int main(){
	int n; //Quantidade de casos de teste.
	int m; //Quantidade de endereços base na tabela.
	int c; //Chave a ser armazenada.
	int i;
	int num;
	int aux;
	Celula *t[MAX_M]; //Tabela de ponteiros


	scanf("%d", &n);
	aux = 0;
	while(n--){
		if(aux)
        	printf("\n");

        aux++;
			Celula *cabeca = NULL;
			Celula *p = NULL;
				scanf("%d %d", &m, &c);
			
				limpa_ponteiros(t, m);

				for(i =0; i < c; i++){
					scanf("%d", &num);
					insere(&t[(num % m)], num);
				}

			for (i = 0; i < m; i++){
            	printf("%d ->", i);
            	for (p = t[i];  p != NULL; p = p->prox){
                printf(" %d ->", p->chave);
            }

            printf(" \\\n");
        }

        
	}
}

void limpa_ponteiros(Celula *p[], int m){
	int i = m;

	while(m--)
		p[m] = NULL;
}

void insere(Celula **cabeca, int c){
   	Celula *p = *cabeca;

   	/*Instânciando uma nova celula.*/
    Celula *nova = (Celula *) malloc(sizeof(Celula));
    nova->chave = c;
    nova->prox = NULL;

    //Caso não esteja vazia.
    if(p != NULL){
    	//Navegando até o ultimo elemento
    	for(; p->prox != NULL; p = p->prox);
    	//Apontando o ultimo elemento para a nova celula.	
    	p->prox = nova;
    	return;
    }
    /*Caso esteja vazia*/
    *cabeca = nova;
}