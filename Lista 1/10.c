// 10� Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

#include <stdio.h>

main(){
	int hq, hm;
	printf ("Quanto voc� ganha por hora?\n");
	scanf("%d",&hq);
	printf ("Quais foram as suas horas trabalhada neste mes?\n");
	scanf("%d",&hm);
	printf ("Voce vai receber %d\n",hm*hq);
	return 0;
}
