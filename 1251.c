#include<stdio.h>
#include<string.h>
#define MAX 1001


 typedef struct Elemento{
	int valor;
	int repeticoes;
}Elemento;

int main(){
	char string[MAX];
	int tam;	
	int n;
	int i, j, l, p;
	int k;
	int aux;
	int contador =0;
	int valor[MAX];
	int espaco =0;
	Elemento elemento[MAX]; 

	while (scanf("%[^\n]%*c", string)!=EOF){			//Lendo a entrada.
		if(espaco > 0 ){
			printf("\n");
		}
			espaco++;						
		tam = strlen(string);	
		//printf("%s\n", string);

		quickSort(0, tam-1, string);
		
		//printf("%s\n", string);
		l =0;
		k = tam-1; 								//Começando da ultima posição do vetor valor[].
		p =0;

		aux = string[k];
		
		while(k >= 0){
			
			contador = 0;						//Zerando contador de repetições de elementos.
			aux = string[k];						//Pegando a ultima posição do vetor valor[].
			elemento[l].valor = aux;			//Adicionando elemento ao campo valor.
			do{
				k--;							//Navegando vetor em ordem decrescente.
				contador++;						//Contando as repetições.
			}while(string[k] == aux);	//Enquanto os elementos forem iguais ao elemento da vez.
			
			elemento[l].repeticoes = contador;
			l++; 								//Incrementando a índice do vetor elemento[].
			p++;								//Incrementando o contador de instâncias do vetor elemento.r
		}
			insertion(p, elemento);

			for(j =0; j < p; j++)
			printf("%d %d\n", elemento[j].valor, elemento[j].repeticoes);
			

	}

	return 0;
}




void insertion(int n, Elemento v[]){
	int i, j;
	int x, y;

	for(i =1; i < n; i++){
		x = v[i].repeticoes;
		y = v[i].valor;
		for(j = i-1; j >=0 && v[j].repeticoes > x; j--){
			v[j+1].repeticoes = v[j].repeticoes;
			v[j+1].valor = v[j].valor;
		}
		v[j+1].repeticoes = x;
		v[j+1].valor = y;	
		}
}


void quickSort(int p, int r, char v[]){
    int q;
    if (p < r){
        q = separa(p, r, v);
        quickSort(p, q, v);
        quickSort(q+1, r, v);
    }
}

int separa(int p, int r, char v[MAX]){
	int x, i, j;
	x = v[p];
	i = p - 1;
	j = r + 1;
      char aux;
		while (1) {
			do{
				j--;
			}while (v[j] > x);
			do{
				i++;
		}while (v[i] < x);
			if (i < j){
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}else
				return j;
		}
}

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a =*b;
    *b = aux;
}