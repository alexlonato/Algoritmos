/*
7) Criar uma fun��o que retorna o seguinte: A fun��o recebe 3 valores float e retornar o
quadrado do 1� + a soma dos outros dois. Vai retornar o tipo inteiro.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int funcaoUm(float num1, float num2, float num3)
{
	int tot;
	
	tot = (int) (num1*num1) + num2 + num3;
	
	return tot;
}


main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float num[3];
	int i, total;
	
	for(i=0;i<3;i++)
	{
		printf("Insira o %d� n�mero: ", i+1);
		scanf("%f", &num[i]);
	}
	
	total = funcaoUm(num[0],num[1],num[2]);
	
	printf("\nO resultado do c�lculo �: %d", total);
	
}
