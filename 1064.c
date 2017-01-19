#include<stdio.h>

int main(){
	int i;
	double v[6], soma =0;
	int pstv =0;
	

	for(i =0; i < 6; i++)
	scanf("%lf", &v[i]);

	

	for(i = 0; i < 6; i++){
		
		if(v[i] > 0){
			soma += v[i];
			pstv++;
		}
		
	}

		printf("%d valores positivos\n", pstv);
		printf("%.1lf\n", (soma / pstv));
}