// 14� Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo�se que este sofreu um aumento de 25%.

#include <stdio.h>

float sa (float s){
	return (s + ((s*25)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",sa(s));
	return 0;
}
