// 6� Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.

#include <stdio.h>

float media (float n1, float n2, float n3, float n4){
	
	return ((n1+n2+n3+n4)/4);
}

main(){
	float n1, n2, n3, n4;
	
	scanf ("%f %f %f %f",&n1,&n2,&n3,&n4);
	printf ("%f\n",media(n1,n2,n3,n4));
	return 0;
}
