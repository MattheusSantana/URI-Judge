/* Programa: 1162.c
Programador: Matheus E. Santana
Data: 15/12/2016
    Desafio n° 1162 - Organizador de vagões. URI Online Judge.
*/

#include<stdio.h>

#define MAX 50

int main(){
    int l; //Número de repetições do programa
    int n; //Quantidade de vagões.
    int v[MAX];
    int trocas; //Quantidade de trocas.
    int i;
    int x;
    scanf("%d", &l);
    while(l--){
    trocas =0;
        scanf("%d", &n);
        for(i =0; i < n; i++)
            scanf("%d", &v[i]);
        x = n;
        while(x--){
            for(i =0; i < n-1; i++){
                if(v[i] > v[i+1]){
                    v[i]   ^= v[i+1];
                    v[i+1] ^= v[i];
                    v[i]   ^= v[i+1];
                    trocas++;
                }
            }
        }


            printf("Optimal train swapping takes %d swaps.\n", trocas);
    }
    return 0;
}
    