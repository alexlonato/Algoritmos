/*
	1) Preencher um vetor com n�meros inteiros (8unidades); solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor. Se n�o existir, imprimir MSG que n�o existe.

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8], num, i, pos;
	int foi=0;
	
	printf("Complete um vetor com 8 n�meros inteiros.\n");
	
	for(i=0;i<8;i++)
	{
		printf("Insira o %d� n�mero: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nInsira um n�mero qualquer: ");
	scanf("%d", &num);
	
	for(i=0;i<8;i++)
	{
		if(num==vet[i])
		{	
			pos=i+1;
			foi=1;
		}
	}
	
	if(foi!=0)
	{
		printf("O n�mero digitado %d foi encontrado no vetor, na posi��o %d", num, pos);
	}
	else
		printf("O n�mero digitado n�o existe no vetor.");
}
