#include<stdio.h>

int main(){
		char nome[20];
		double s,  v;
		scanf("%s %lf %lf", nome, &s, &v);
		
		printf("TOTAL = R$ %.2lf\n", (s + (v * 0.15)));

		return 0;
}