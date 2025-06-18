#include <stdio.h>
#include <stdlib.h>

void main(){
	float n1, n2, resul;
	int opr;
	char opc;
	do{
	printf("Digite 1 para +\n");
	printf("Digite 2 para -\n");
	printf("Digite 3 para /\n");
	printf("Digite 4 para *\n");
	scanf("%d", &opr);
	printf("Digite um número:\n");
	scanf("%f", &n1);
	printf("Digite outro número:\n");
	scanf("%f", &n2);
	switch(opr){
		case 1:
			resul = n1 + n2;
break;
		case 2:
resul = n1 - n2;
break;
		case 3:
resul = n1 / n2;
break;
		case 4:
resul = n1 * n2;
break;
		default:
printf("Operação não existe\n");
}
printf("O resultado é %.2f\n", resul);
printf("Deseja continuar? digite  1 para Sim e  q para encerrar\n");
scanf(" %c", &opc);
}
while (opc == '1');
printf("progama encerrado");
}
