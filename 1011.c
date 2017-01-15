#include<stdio.h>

int main(){
	double a;

		scanf("%lf", &a);
			a = (a * a * a) * 3.14159 * (4/3.0);
		printf("VOLUME = %.3lf\n", a);

		return 0;
}