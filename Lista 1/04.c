// 4� Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.

#include <stdio.h>

main(){
	int x[4], i, soma=0;
	for (i=0;i<4;i++){
		scanf ("%d",&x[i]);
		soma=soma+x[i];
	}
	printf ("%d\n",soma);
	return 0;
}
