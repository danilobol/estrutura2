#include <stdio.h>

float opi (int n1, int n2, int op){
	if (op==1){
		return n1+n2;
	}
	if (op==2){
		return n1-n2;
	}
	if (op==3){
		return 1*n2;
	}
	if (op == 4){
		return n1/n2;
	}
	if (op == 5){
		return (sqrt(n1));
	}
}

main(){
	
	printf ("1. Somar dois n�meros\n"

	"2. Subtrair dois n�meros\n"

	"3. Multiplicar dois n�meros\n"

	"4. Dividir dois n�meros \n"

	"5. Raiz quadrada de um n�mero\n\n");
	
	int op,n1,n2;
	
	printf ("Digite a opcao desejada:\n");
	scanf ("%d", &op);
	
	
	if (op==1){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op==2){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op==3){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op == 4){
		printf ("Digite um numero:\n");
		scanf ("%d %d", &n1, &n2);
	}
	if (op == 5){
		printf ("Digite um numero:\n");
		scanf ("%d", &n1);
		n2=0;
	}
	
	printf ("%f", opi(n1, n2, op));
}
