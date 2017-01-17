#include<stdio.h>

int main (){
	int l, x;

	scanf("%d", &l);

	while(l--){
		scanf("%d", &x);

		//negativo par
		if(x < 0 && x %2 ==0)
		printf("EVEN NEGATIVE\n");

		if(x > 0 && x % 2 ==0)
			printf("EVEN POSITIVE\n");
		if( x ==0 )
			printf("NULL\n");
		if(x < 0 && x % 2 != 0)
			printf("ODD NEGATIVE\n");
		if(x > 0 && x % 2 !=0)
			printf("ODD POSITIVE\n");
	}

	return 0;
}
