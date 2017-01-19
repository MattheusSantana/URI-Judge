#include<stdio.h>

int main(){
	int i, cont =1;
	int v[5];
	int par =0, positivo =0, zero =0;
	for(i =0; i < 5; i++)
	scanf("%d", &v[i]);

	

	for(i = 0; i < 5; i++){
		if(v[i] % 2 == 0)
			par++;
		if(v[i] > 0)
			positivo++;
		if(v[i] == 0) 
			zero++;
	}

		printf("%d valor(es) par(es)\n", par);
		printf("%d valor(es) impar(es)\n", (5 - par));
		printf("%d valor(es) positivo(s)\n",positivo);
		printf("%d valor(es) negativo(s)\n", (5 - positivo - zero));
}