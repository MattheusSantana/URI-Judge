
#include<stdio.h>

int main(){
	int a, i, x, c =0;


	while(1){
		scanf("%d", &x);
		if(x == 0)
			break;

			c =0;
		for(i =0; i < x; i++){
			scanf("%d", &a);
			if(a == 0)
				c++;
			
		}
	
	printf("Mary won %d times and John won %d times\n", c, (x -c));
	}
}