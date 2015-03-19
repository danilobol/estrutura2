#include <stdio.h>


int somar (int a, int b);
int subtrair(int a, int b); //prot�tipos de fun��o

int (*sub) (int, int) = subtrair; // criamos um atalho para a fun��o "subtrair"

int operacao(int x, int y, int (*func) (int, int));

int main(){
	int i, j;
	i = operacao(7, 5, somar); // chamamos a fun��o diretamente pelo nome
	j = operacao(20, i, sub); // chamamos a fun��o pelo atalho
	
	printf ("Resultados das operacoes:\n\n");
	printf ("7 + 5 = %d\n", i);
	printf ("20 - %d = %d\n\n",i,j);
	return 0;
}

int somar (int a, int b){
	return (a+b);
}

int subtrair (int a, int b){
	return (a-b);
}

int operacao (int x, int y, int (*func)(int, int)){
	int op;
	op = func(x, y); // Tamb�m poderia ser "op = (*func) (x, y);"
	return op;
}
