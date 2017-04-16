
#include<stdio.h>

int main(){
	int a, i, x, empate, b, c =0;


	while(1){
		scanf("%d", &x);
		if(x == 0)
			break;

			c =0;
			empate =0;
		for(i =0; i < x; i++){
			scanf("%d %d", &a, &b);
			if(a > b)
				c++;
			if(a == b)
				empate++;
			}
	
	printf("%d %d\n", c,(x -c - empate));
	}
}