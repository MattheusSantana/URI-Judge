#include<stdio.h>

int main(){
    double n;
    int i = 6;
    int cont =0;

    while(i--){
        scanf("%lf", &n);
        if(n > 0)
            cont++;
    }

    printf("%d valores positivos\n", cont);

    return 0;
}
