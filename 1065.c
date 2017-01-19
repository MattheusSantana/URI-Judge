#include<stdio.h>

int main(){
	int i;
	int v[5];
	int par =0;
	

	for(i =0; i < 5; i++)
	scanf("%d", &v[i]);

	

	for(i = 0; i < 5; i++){
		if(v[i] % 2 == 0)
			par++;
		
	}

		printf("%d valores pares\n", par);
}