#include<stdio.h>

long long int fat(int);

int main(){
	
	int n1, n2;
	long long int x;
	
	while(scanf("%d %d", &n1, &n2) != EOF){
		x = fat(n1) + fat(n2);

	printf("%lld\n", x);

	}
	return 0;
}
long long int fat(int n){
	
	if(n)		
		return n * 	fat(n-1);
	else
		return 1;
		
	
}