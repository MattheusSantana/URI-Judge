#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000


typedef struct celula{
	char caractere;
	struct celula *prox;
}Celula;


int main(){
	char in[MAX+1];
	int n;
	int c;
	int qtd =0;
	scanf("%d", &n);

	Celula cel;
	Celula *aux; //Ponteiro auxiliar.
	Celula *topo; //Ponteiro para o topo da pilha.

	while(n--){
		scanf("%s", in);
		aux = NULL;
		topo = NULL;
		qtd =0;
		c  =0;
			while(c < strlen(in)){
				if(in[c] == '<'){
					aux = (Celula *) malloc(sizeof(Celula));
					aux->caractere = '<';
					aux->prox = topo; //Apontando a nova celula para a anterior a partir do segundo '<'.	
					topo = aux; //Apontando topo para a nova celula.
				}

				if(in[c] == '>'){
					if(topo != NULL){
					
						aux = topo;
						topo = aux->prox;
						free(aux);
						qtd++;
					}


				}
				c++;
			}
			printf("%d\n", qtd);

	}
		return 0;
}