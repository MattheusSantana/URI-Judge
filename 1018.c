#include<stdio.h>

int main(){
	int x;
	int qtd, i=7, resto;
	int v[7] = {1, 2, 5, 10, 20, 50, 100};
		scanf("%d", &x);
		resto = x;
			printf("%d\n", x);
			while(i--){
				qtd = resto / v[i];
				resto = resto % v[i];
				printf("%d nota(s) de R$ %d,00\n", qtd, v[i]) ;
				
			}	

		

		return 0;
}