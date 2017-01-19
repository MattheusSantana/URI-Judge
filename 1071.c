#include<stdio.h>

int main(){
	int i, x, y, cont =0;
	int maior, menor;
	scanf("%d %d", &x, &y);

	if( x > y){
		maior = x;
		menor = y;
	}else{
		maior = y;
		menor = x;
	}



	for(i = menor+1; i < maior; i++)
		if(i % 2 != 0)
			cont+= i;

		printf("%d\n", cont);
}