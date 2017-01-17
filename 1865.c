#include<stdio.h>
#include<string.h>

int main(){
	int f, l;
	char nome[25000];


	scanf("%d", &l);

	while(l--){
		scanf("%s %d", nome, &f);

		if(strcmp(nome, "Thor") == 0)	
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;			
}