// 16� Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo�se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre este sal�rio.

#include <stdio.h>

float sal (float s){
	return (s + ((s*5)/100) - ((s*7)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",sal(s));
	return 0;
}
