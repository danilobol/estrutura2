// 10� Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

#include <stdio.h>

float sa (float x, float y){
	return x*y;
}

main(){
	float hq, hm;
	printf ("Quanto voc� ganha por hora?\n");
	scanf("%f",&hq);
	printf ("Quais foram as suas horas trabalhada neste mes?\n");
	scanf("%f",&hm);
	printf ("Voce vai receber %f\n",sa(hm, hq));
	return 0;
}
