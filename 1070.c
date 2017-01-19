#include<stdio.h>

int main(){
	int i, x, cont =1;


	scanf("%d", &x);



	for(i = x; cont < 7; i++){
		if(i % 2 != 0){
			cont++;
			printf("%d\n", i);
		}

		
	}
}