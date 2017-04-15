#include<stdio.h>

int main(){
    int i, j;
    int maior, menor;
  scanf("%d %d", &i, &j);

    if(i > j){
        maior = i;
        menor = j;
    }else{
        menor = i;
        maior = j;
    }

  if(maior % menor == 0)
    printf("Sao Multiplos\n");
  else
    printf("Nao sao Multiplos\n");

    return 0;
}
