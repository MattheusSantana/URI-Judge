#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 1000

typedef struct celula{
	char caractere; //Armazenará o parentese.
	struct celula *prox; //Ponteiro para a próxima célula.
}Celula;

typedef struct pilha{
	int qtd; //Quantidade de elementos na pilha.
	Celula *t; //Apontará para o topo da pilha
}Pilha;

typedef struct pilha Pilha;

int main(){
	int contador;
	Celula *aux; //Ponteiro auxiliar.
	char entrada[MAX] = "";
	Pilha p; //Pilha
	int saida;
	

		while(scanf("%s", entrada)!= EOF){
			p.t = NULL; 
			p.qtd = 0;
			saida = 0;
			contador = 0;


			do{
				
				
				if(entrada[contador] == '('){
					aux = (Celula *) malloc(sizeof(Celula)); //Alocando uma célula dinâmicamente.

					if(aux == NULL) //Caso a alocação dê errado.
						break;

					aux->caractere = entrada[contador]; //Adicionando conteúdo na celula.
					aux->prox = p.t; //Apontando o prox para o topo da pilha, neste caso é nulo.

					p.t = aux; //Apontando o topo da pilha para a nova célula.
					p.qtd++; //Incrementando a quantidade de células.
				}

				if(entrada[contador] == ')'){
					if(p.t == NULL){ //Se o topo da pilha apontar para nulo, quer dizer que não tem o parentese par.
						saida = 1;
						break;
					}else{
						//aux = p.t;
						p.t = aux->prox; //Fazendo o topo apontar para a célula anterior.
						free(aux);
						p.qtd--; //Decrementando a quantidade de elementos.
					}
				}

				contador++;
			}while(contador < strlen(entrada));
		
			if(saida|| p.qtd )
				printf("incorrect\n");
			else
				printf("correct\n");
}
			return 0;
}