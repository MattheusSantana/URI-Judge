#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct celula{
	int valor;
	struct celula *prox;
}Celula;

int main(){
	int n; //Entrada
	int i;
	int a;
	Celula *inicio;
	Celula *fim;
	Celula *q; //Esse ponteiro será usado para navegar na fila.
	

	while(scanf("%d", &n) && n != 0){
            //if(n == 1){
              //  printf("Discarded cards:\n");
                //printf("Remaining card: 1\n");
                //scanf("%d", &n);
            //}else{



		inicio = NULL;
		fim = NULL;


		//Alocando a cabeça da fila.
		inicio = (Celula *) malloc(sizeof(Celula));//Alocando uma nova célula.
			inicio->prox = NULL;
			fim = inicio; //Apontando o fim da fila paea a primeira celula.


			for(i = 1; i <= n; i++)
				enfileira_enc_c(inicio, &fim, i);



				printf("Discarded cards:");
			for(i = 1; i < n; i++){
				if(i == n-1)
					printf(" %d", desenfileira_enc_c(inicio, &fim));
				else
				printf(" %d,", desenfileira_enc_c(inicio, &fim));
			}


			printf("\nRemaining card: %d\n", fim->valor);

            }
//	}

return 0;

}
void enfileira_enc_c(Celula *c, Celula **f, int n){

	Celula *nova;

	nova = (Celula *) malloc(sizeof(Celula));
	nova->valor = n;
	nova->prox = NULL;
	(*f)->prox = nova; //Apontando o prox da ultima celula para a nova celula.
	*f = nova; //Apontando final para a nova celula.
}

int desenfileira_enc_c(Celula *i, Celula **f){
	int x = INT_MIN;
	Celula *p = i->prox; //Apontado p para o primeiro elemento da fila.
	Celula *q = NULL; //Este ponteiro será utilizado para enviar o segundo elemento para o fim da fila.
	//1° - Verificar se a fila não está vazia.
	if(p != NULL){
		x = p->valor; //Guardando o conteúdo da célula que será removida.
		i->prox = p->prox; //Fazendo com que a cabeça aponte agora para o segundo elemento da fila.
		free(p); //Limpando da memória o primeiro elemento da fila.

		//2° - Verificando se a fila não ficou vazia.
		//Caso esteja é necessário que o fim da lista aponte para a cabeça.
		//Pelo fato de ter removido a ultima célula, o fim ainda guarda o endereço de memória (Que no caso estará limpo).
		if(i->prox == NULL){
			*f = i;
			return x;
		}else{
			q = i->prox; //Apontando q para o novo 1° elemento da fila.
			i->prox = q->prox; //Apontando a cabeça para o novo 2° elemento da fila.
			(*f)->prox = q; //Fazendo com que o ultimo elemento da fila aponte agora para o 2° elementoo, de forma.
			*f = q; //Apontando o fim da fila para o segundo elemento.

		}

	}else
		printf("Pilha Vazia\n");

	return x;
}
