/*
	1) Preencher um vetor com números inteiros (8unidades); solicitar um número do teclado.
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir MSG que não existe.

*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8], num, i, pos;
	int foi=0;
	
	printf("Complete um vetor com 8 números inteiros.\n");
	
	for(i=0;i<8;i++)
	{
		printf("Insira o %dº número: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nInsira um número qualquer: ");
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
		printf("O número digitado %d foi encontrado no vetor, na posição %d", num, pos);
	}
	else
		printf("O número digitado não existe no vetor.");
}
