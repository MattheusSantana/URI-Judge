#include<stdio.h>
#include<stdlib.h>


int main(){
	int x, m =0;

	int b =3;
		while(b--){
			scanf("%d", &x);
				x = abs(x);
				if(m < x)
					m = x;
				
		}
		printf("%d eh o maior\n", m);

		return 0;
}