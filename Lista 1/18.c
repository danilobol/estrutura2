// 18 �Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Supondo que: �rea = (base *altura) / 2.

#include <stdio.h>

float t (float b, float a){
	return ((b*a)/2);
}

main(){
	float b, a;
	scanf("%f %f",&b,&a);
	printf ("%f\n",t(b, a));
	return 0;
}
