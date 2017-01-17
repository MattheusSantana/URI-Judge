#include<stdio.h>

int main(){
	double x;
	int moedas;

	int qtd, i=6, resto;
	int v[6] = {2, 5, 10, 20, 50, 100};
		

		scanf("%lf", &x);
			resto = (int)x;
			x =  x * 100;
			moedas = (int) x;
			
			moedas = moedas % 100;
			
			printf("NOTAS:\n");
			
			while(i--){
				qtd = resto / v[i];
				resto = resto % v[i];
				printf("%d nota(s) de R$ %d.00\n", qtd, v[i]) ;
			}

			resto = (resto * 100) + moedas;
			
					printf("MOEDAS:\n");

				printf("%d moeda(s) de R$ 1.00\n", (resto / 100));
				resto = resto % 100;
				

				printf("%d moeda(s) de R$ 0.50\n", (resto / 50));
				resto = resto % 50;


				printf("%d moeda(s) de R$ 0.25\n", (resto / 25));
				resto = resto % 25;	


				printf("%d moeda(s) de R$ 0.10\n", (resto / 10));
				resto = resto % 10;	

				printf("%d moeda(s) de R$ 0.05\n", (resto / 5));
				resto = resto % 5;
		

				printf("%d moeda(s) de R$ 0.01\n", (resto / 1));
				
	return 0;
}