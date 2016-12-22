/* Programa: 2235.c
Programador: Matheus E. Santana
Data: 15/12/2016
    Desafio n° 2235 - Andando no tempo. URI Online Judge.
*/


#include<stdio.h>

int main (){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a - b == 0 || a - c == 0 || c - b == 0)
    printf("S\n");
    else if(a +b -c == 0 || a + c -b == 0 || b + c -a  == 0)
    printf("S\n");
    else
        printf("N\n");
	return 0;
}
