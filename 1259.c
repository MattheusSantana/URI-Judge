/* Programa: paresEImpares.c
	Programador: Matheus E. Santana da Silva
	Data: 09/12/2016
	Desáfio n° 1259 - Pares e ímpares.
	Este programa ordena um vetor de inteiros v[n] de forma que os pares fiquem em ordem crescente e os ímpares em ordem decrescente.	
*/

#include<stdio.h>

#define MAX 100000

int main(){
    int n;					//tamanho do vetor
    int v[MAX];				//Vetor á ser ordenado em ordem crescente.
    int vetor[MAX];			//Vetor á ser ordenado com os pares em ordem crescente e os ímpares em ordem decrescente.
    int i, j;				//Indices dos laços.

    scanf("%d", &n);						//Leia o tamanho do vetor v[n].

    for(i =0; i < n; i++)					//Populando o vetor.		
    scanf("%d", &v[i]);					
	
	 mergeSort(0, n, v);					//Ordenando em ordem crescente.

   
    j =0;
    for(i = 0; i < n; i++){ 				//Navegando o vetor w[].
            if(v[i] % 2 == 0){ 				//Caso o elemento seja par.
                    vetor[j] = v[i];  		//Adicionado os pares no primeiro intervalo v[i, j];
                    j++;					//Fim do intervalo dos números pares.
            }

        }


        j = n-1;							//Indice dos números ímpares, começando no fim do intervalo.
        for(i =0; i < n; i++){				//Percorrendo o vetor v[].
            if(v[i] % 2 != 0){				//Caso o elemento seja ímpar.
            vetor[j] = v[i];				//Adicionado elemento ao vetor final em ordem decrescente no intervalo vetor[r-1, p], onde P é o fim do intervalos dos n pares.
            j--;							//Decrementando o índice.
            }
        }

    for(i =0; i < n; i++)					//percorrendo vetor final.
    printf("%d\n",vetor[i]);				//Imprimindo vetor final ordenado.



    return 0;
}
void mergeSort(int p, int r, int v[]){
    int q;

    if(p < r-1){
        q = (p + r) /2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        intercala(p, q, r, v);
    }
}

void intercala(int p, int q, int r, int v[]){
    int i = p;
    int j = q;
    int k =0;
    int w[r-1];

        while(i < q && j < r){
            if(v[i] < v[j]){
                w[k] = v[i];
                i++;
            }else{
                w[k] = v[j];
                j++;
            }
            k++;
            }


        while(i < q){
            w[k] = v[i];
            i++;
            k++;
        }
        while(j < r){
            w[k] = v[j];
            j++;
            k++;
        }

       for( i =p; i < r; i++)
        v[i] = w[i-p];
}
