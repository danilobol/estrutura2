9� Seja a seguinte seq��ncia de instru��es int i=10, j=20;

int *pti, *ptj;

pti = &i;

ptj = &j;

Qual express�o n�o � v�lida?

a. j = pti == ptj; // Express�o booleana, j retornaria o valor 0

b. i = pti�ptj; // retorna 1

c. pti += ptj; 

d. pti++; // passa para um outro endere�o da memoria.

e. as

f. i = pti || ptj; // retorna 1


Resposta: c. pti += ptj;

Daria erro, pois est� tentando somar os endere�os. O correto seria *pti += *ptj;  
