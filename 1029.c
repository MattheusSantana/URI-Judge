/* Programa: Fibonacci.c
Programador: Matheus E. Santana da Silva
Data: 17/11/2016
	Esse Programa calcula o n-esimo termo e o numero de chamadas da funcao recursiva da sequencia de fibonacci.
*/
#include<stdio.h>

int contador = 0; //Váriavel global para contar o numero de chamadas da funcao.

int main(){
   
    int n; //Numero de execucoes do programa.
    int num; //n-esimo termo.
	int i; // indice do for.
	//Numero de execucoes do programa.
    scanf("%d", &n);

    for(i =0; i < n; i++){
        //Digite o termo desejado.
        scanf("%d", &num);
        
        //Excluindo a primeira chamada da funcao.
        contador = contador -1;
        
        //Ex: fib(5) = 14 calls = 5
		printf("fib(%d) = %d calls = %d\n", num, contador, Fib(num));
        
        //Reiniciando contador a cada repeticao do programa.
		contador =0;
    }
    return 0;
}
//Essa função calcula o n-esimo termo da sequencia de fibonacci
int Fib(int i){
	contador++; //Incrementando a cada chamada da função.
	
	//Se i = 0 ou i =1.
    if(i <=1 )
        return i;

    else{ 
	//Para entrada maior ou igual a 3, calcule a soma de n = n-1 + n-2 recursivamente.
        return  Fib(i-1) + Fib(i-2);
    }
}
