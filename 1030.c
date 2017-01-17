#include <stdio.h>


int main(){

	int m, n, i, aux = 0, quant;
	int count, matar, nn = 0;

	scanf("%d", &quant);



  while(quant--){
    nn++;
    scanf("%d %d", &m, &n);

      char fila[m];

      for(i=0 ; i < m ; i++)
        fila[i] = 1;

      count = 0;
      matar = 0;
      aux = 0;

  	while(m - aux != 1){
  		
  			//verifica se pessoa esta viva
  			if(fila[count] == 1){
  				matar++;
  			}
  			
  			// se contou 2 pessoa mata
  			if(matar == n){
  				fila[count] = 0;
  				matar = 0;
  				aux++;
          /*
  				//printf("\nmatou ============:>%d\n", count+1);
  				for(i=0 ; i < m ; i++)
  					printf("%d\n", fila[i]);

  				printf("======================\n" );*/

  			}

  			//verifica se vetor acabo se não acabo vai somar +1 ao vetor
  			if(count == m-1){
  				count = 0;
  			}
  			else
  				count++;
  			
  	}

    for(i=0 ; i < m ; i++)
      if(fila[i] != 0)
        printf("Case %d: %d\n", nn, i+1);

  }





}