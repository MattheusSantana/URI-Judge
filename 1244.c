#include <stdio.h>
#include <string.h>

#define MAX 51

typedef struct {
    char palavra[MAX];
    int tamanho;
} Palavras;

int main(){
    Palavras vetpalavras[MAX];
    char frase[MAX * MAX], palavraAux[MAX];
    int n, i, a, l;
    int palavra, caractere, maior;

    scanf("%d ", &n);
    for (i = 0; i < n; i++){
        palavra = 0;
        caractere = 0;  

        //------------FIM DECLARAÇÃO DE VARIÁVEIS----------------//
        scanf("%[^\n]%*c", frase);
        //frase[strlen(frase)] = '\0';

        for (a = 0; a <= strlen(frase); a++){
            if ( frase[a] == '\0' ||frase[a] == ' ' ){
                palavraAux[caractere] = '\0';
                strcpy(vetpalavras[palavra].palavra, palavraAux);
                vetpalavras[palavra].tamanho = caractere;
                palavra++;
                strcpy(palavraAux, "");
                caractere = 0;
            } else {
                palavraAux[caractere] = frase[a];
                caractere++;
            }
        }

        mergeSort(0, palavra, vetpalavras);

        for (a = 0; a < palavra; a++){
            printf("%s", vetpalavras[a].palavra);
            if (a < palavra - 1)
                printf(" ");
        }
        printf("\n");

        for (l = 0; l < MAX; l++){
            strcpy(vetpalavras[l].palavra, "");
            vetpalavras[l].tamanho = 0;
        }
    }

    return 0;
}

void mergeSort(int p, int r, Palavras v[MAX]){
    int q;

    if (p < r - 1) {
        q = (p + r) / 2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        intercala(p, q, r, v);
    }
}

void intercala(int p, int q, int r, Palavras v[MAX]){
    int i, j, k;
    Palavras w[MAX];

    i = p;
    j = q;
    k = 0;

    while (i < q && j < r) {
        if (v[i].tamanho >= v[j].tamanho) {
            w[k] = v[i];
            i++;
        } else {
            w[k] = v[j];
            j++;
        }
        k++;
    }
    while (i < q) {
        w[k] = v[i];
        i++;
        k++;
    }
    while (j < r) {
        w[k] = v[j];
        j++;
        k++;
    }
    for (i = p; i < r; i++)
        v[i] = w[i-p];
}
