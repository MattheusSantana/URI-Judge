/* Programa: filaDoRecreio.c
Programador: Matheus E. Santana da Silva
Data: 9/12/2016
		Desáfio n° 1548 do URI Online Judge - Fila do Recreio.
*/

#include<stdio.h>

#define MAX 1000

int main(){
	int v[MAX];							//Vetor de inteiros de (1 = M = 1000)
	int aux[MAX];						//Este vetor auxiliar receberá os elementos do vetor v[], e guardará a ordem original.
	int n;								//Número de elementos.
	int i, l;							//Indices de íterações dos laços.
	int contador;						//Armazenará a quatidade de  elementos que não mudaram de posições.
	
	scanf("%d", &l);					//Número de laços do programa.
		while(l--){
		contador = 0;					//Zerando o contador.	
		scanf("%d", &n);				//Entre com o tamanho do vetor.
		
		for(i =0; i < n; i++)			//Populando o vetor.
			scanf("%d", &v[i]);
		
		for(i =0; i < n; i++)			//Navegando o vetor v[].
			aux[i] = v[i];				//Copiando os elementos de v para o vetor auxiliar.

		mergeSort(0, n, v);				//Ordenando o vetor v[] em ordem decrescente.
	
		for(i =0; i < n; i++){			//Navegando os vetores v[] e aux[].
			if(v[i] == aux[i])			//Comparando os elementos do vetor v[], agora ordenado, com o vetor auxiliar que contem a formação original do vetor v.
			 	contador++;				//Contando quantos elementos permaneceram no mesmo lugar.
		}
			printf("%d\n", contador);	//Imprimindo a quantidade de elementos que não mudaram de posição.
	}
	return 0;
}

void mergeSort(int p, int r, int v[]){
	int q;
	
	if(p < r-1){
		q = (p + r) /2;
		mergeSort(p, q, v);
		mergeSort(q, r, v);
		separa(p, q, r, v);
	}
	
}

void separa(int p, int q, int r, int v[]){
	int i = p;
	int j = q;
	int k =0;
	int w[r-1];


		while(i < q && j < r){
			if(v[i] > v[j]){
				w[k] = v[i];
				i++;
			}else{
				w[k] = v[j];
				j++;
			}
			k++;
		}
		while( i < q){
			w[k] = v[i];
			i++;
			k++;
			}
		while( j < r){
			w[k] = v[j];
			j++;
			k++;
		}
		
		for( i =p; i < r; i++)
		v[i] = w[i-p];		
	}
