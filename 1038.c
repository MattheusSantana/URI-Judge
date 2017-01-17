#include<stdio.h>

int main (){
	int c, q;

	scanf("%d %d", &c, &q);
	
	if(c == 1 )
		printf("Total: R$ %.2lf\n", (q * 4.0));		
	if(c == 2)
		
		printf("Total: R$ %.2lf\n", (q * 4.50));
	if(c == 3)
		
		printf("Total: R$ %.2lf\n", (q * 5.0));
	if(c == 4)	
		
		printf("Total: R$ %.2lf\n", (q * 2.0));
	if(c==5)
		printf("Total: R$ %.2lf\n", (q * 1.50));
		
	return 0; 	
}