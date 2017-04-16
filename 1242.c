#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 300
typedef struct celula{
    char caracter;
    struct celula *prox;
}Celula;
void empilha(Celula *t, char c);
void desempilha(Celula *t);
int main(){
    char str[MAX];
    int qtd;
    int i;







    while(scanf("%s", str) != EOF){
        qtd =0;
        Celula *t;
        t = (Celula *) malloc(sizeof(Celula));
        t->prox = NULL;
       // printf("entrou na main\n");
        //empilha(t, str[0]);
       // Celula *p = t->prox;
        //printf("Empilho -> %c", p->caracter);
       // printf("empilhou!\n");
        for(i=0; i < strlen(str); i++){
       // printf("%d\n", i);

        if(t->prox == NULL){
                 //printf("entrou no else \n");
                empilha(t, str[i]);

            }else if(t->prox->caracter == 'B' && str[i] == 'S' || t->prox->caracter == 'S' && str[i] == 'B'){
              //  printf("entrou no if 1\n");
                desempilha(t);
                qtd++;
            //Par C e F.
            }else if(t->prox->caracter == 'F' && str[i] == 'C' || t->prox->caracter == 'C' && str[i] == 'F'){
               // printf("entrou no if 2\n");
                desempilha(t);
                qtd++;
            //Caso nao forme par, empilhe.
            }else{
                empilha(t, str[i]);
            }

        }
        while(t->prox != NULL){
            desempilha(t);
        }
        printf("%d\n", qtd);

    }

    return 0;
}

void empilha(Celula *t, char c){
    Celula *nova;

    nova = (Celula *) malloc(sizeof(Celula));
    nova->caracter = c;
    nova->prox = t->prox;
    t->prox = nova;
}

void desempilha(Celula *t){
    if(t->prox != NULL){
        Celula *p = t->prox;
        t->prox = p->prox;
        free(p);
    }

}
