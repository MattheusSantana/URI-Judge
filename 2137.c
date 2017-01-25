/* Programa: 2137.c
Programador: Matheus E. Santana da Silva
Data: 05/12/2016
	Problema número 2137 do URI jUGDE. - A Biblioteca do Senhor Severino.
*/

#include<stdio.h>

#define MAX 1000
int main(){
    int v[MAX]; 	//<= N <= 1000.
    int j =0; 	    //Posição do vetor.
    int n;	 		//Quantidade de elementos.
    int i;			//Índice do laço for.
    
    	while(scanf("%d", &n) != EOF){		//Leia o arquivo de entrada até o final
			j = 0;							//Atualizando o valor do índice de armazenamento.
        	int v[n];						//Armazanando a posição do elemento mais a direita.
            for(i = 0; i < n; i++){			//Lendo os elementos. 
            	scanf("%d", &v[j]);			//Armazenando na posição j. 0 <= j < n.
            	j++;						//Incrementando a posição para continua-la segundo os próximo intervalos.
            }
            quickSort(0, n-1, v);			//Ordenando o vetor.
            						
            for(i = 0; i < n; i++)			//Imprimindo a saída.
        	printf("%0.4d\n", v[i]);		//Utilizando 4 casas a direita.
    }
    return 0;
}


void quickSort(int p, int r, int v[]){	// Recebe um vetor v[p..r] e o rearranja em ordem crescente //
	int q; 								//Váriavel armazenará alguma posição entre o ínicio e o fim do intervalo.
    if(p < r){							
        q = separa(p, r , v);			//Separando os elementos pequenos dos grandes.
        quickSort(p, q, v);				//Ordenando recursivamente o intervalo de v[p, q].
        quickSort(q+1, r, v);			//Ordenando recursivamente o intervalo de [q+1, r].
    }
}
int separa(int p, int r, int v[]){
    int x = v[p];						//Pivô.										
    int i = p-1;						//posição antes do ínicio do intervalo..
    int j = r+1;						//posição depois do fim do intervalo.

    while(1){
        do{					
            j--;						//Primeiramente, decrementando a posição do fim do intervalo.
        }while(v[j] > x);				//enquanto a ultima posição for menor que o pivô.

        do{
            i++;						//Primeiramente, incrementando a primeira posição do intervalo.
        }while(v[i] < x);				//enquanto a primeira posição for maior que o pivô.

        if(i < j){						//Trocando os elementos utilizando o operandor XOR. 
        	v[j] ^= v[i]; 					
        	v[i] ^= v[j];
        	v[j] ^= v[i];
        }else
            return j;					//Retornando a posição mais a direita.
    }
}