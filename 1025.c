/* Programa: Marmore.c
Programador: Matheus E. Santana da Silva
Data: 29/11/2016
	Desáfio n° 1025 do URI jUDGE Online. Onde Está o Mármore.
*/

#include<stdio.h>

#define MAX 10000
void insertionSort(int n, int v[MAX]);
int main (){
    int n; //Quantidade de elementos
    int q; // Quantidade de buscas
    int x =0; //Elemento a ser buscado
    int pos =0; //Indice do vetor onde se encontra x.
    int j =1; //Número de casos.
    int v[MAX]; // 0 > x > 10000.
    int i; //iterações do laço for.
    int k =0;

		//Passo 1. - Leia as entradas.

		scanf("%d %d", &n, &q);
    	while(n != 0 && q !=0 ){

    	//Passo 1.1- Preencha o vetor.
       for(i =0; i < n ; i++)
            scanf("%d", &v[i]);

		//Passo 2. - Ordenando os elementos do vetor.
        insertionSort(n, v);

		//Faça as buscas
		printf("CASE# %d:\n", j);
		for(k =0; k < q; k++){

		//Passo 3. - Buscando o elemento x.

					scanf("%d", &x);

					pos = buscaBinaria(n, v, x);

					if(v[pos] == x)
                    printf("%d found at %d\n",x, pos+1);
                    else
                    printf("%d not found\n", x);


		}
		 j++; //Incrementando o número de casos.
		scanf("%d %d", &n, &q);
	}
	return 0;
}


/* Método de ordenação por inserção
    Considera um elemento de um conjunto como ordenado e adiciona o próximo
    elemento em sua nova posição de forma que o conjunto sempre se mantenha ordenado,
    repetindo até o fim do conjunto.
    Recebe um número inteiro n >= 0 e um vetor v de números inteiros
    com n elementos e rearranja o vetor v de modo que fique crescente */

void insertionSort(int n, int v[]){
    int aux;
    int j, i;

    for(i =1; i < n; i++){
        aux = v[i];
        for(j = i-1; j >= 0 && v[j] > aux; j--)
            v[j+1] = v[j];

        v[j+1] = aux;
    }
    return;

}
int buscaBinaria(int n, int v[MAX], int x)
{
int esq, dir, meio;
esq = -1;
dir = n;
while (esq < dir - 1) {
meio = (esq + dir) / 2;
if (v[meio] < x)
esq = meio;
else
dir = meio;
}
return dir;
}
