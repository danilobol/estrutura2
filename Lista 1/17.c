// 17� Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o seu sal�rio a receber,
//sabendo�se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.

#include <stdio.h>

float im (float s){
	return (s + 10 - ((s*10)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",im(s));
	return 0;
}
