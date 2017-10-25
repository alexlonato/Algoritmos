/*
10) Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e imprimir os
elementos da diagonal principal.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[4][4];
	int i, j;
	
	printf("Preencha a matriz. (4X4)\n");

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) 
		{
			printf("Insira o número da %dº linha e %dª coluna: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);			
		}		
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) 
		{
				printf("%d ", mat1[i][j]);	
				if(j==3)
					printf("\n");	
		}
	}
	
	printf("\nOs elementos que integram a diagonal principal da matriz são: ");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++) 
		{
			if(i==j)
				printf("%d ", mat1[i][j]);		
		}
	}
}
