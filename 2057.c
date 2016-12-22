/* Programa: 2057.c
Programador: Matheus E. Santana
Data: 15/12/2016
    Desafio n° 2057 - Fuso Horário. URI Online Judge.
*/


#include<stdio.h>

int main (){
    int s, t, f;
    int x;

    scanf("%d %d %d", &s, &t, &f);
    if(s == 0)
        s =24;
    x = ((s + t+ f) % 24) ;

    printf("%d\n", x);
    return 0;
}
	