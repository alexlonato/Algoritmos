/*
01) Criar um algoritmo para preencher com valores numéricos uma matriz 4 x 4 
e que em seguida exiba na tela os elementos da diagonal principal.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[4][4];
	int coluna, linha;
	
	printf("Preencha a matriz. (4X4)\n");

	for(coluna=0;coluna<4;coluna++)
	{
		for(linha=0;linha<4;linha++) 
		{
			printf("Insira o número da %dº linha e %dª coluna: ", coluna+1, linha+1);
			scanf("%d", &mat1[coluna][linha]);			
		}		
	}
	
	printf("\nMatriz registrada.\n");
	
	for(coluna=0;coluna<4;coluna++)
	{
		for(linha=0;linha<4;linha++) 
		{		
			printf("%d ", mat1[coluna][linha]);	
			if(linha==3)
				printf("\n");
			
		}
	}
	
	printf("\nA diagonal principal da matriz é: \n\n");
	
	for(coluna=0;coluna<4;coluna++)
	{
		for(linha=0;linha<4;linha++) 
		{		
			if(coluna==linha)
			{
				printf("%d ", mat1[coluna][linha]);	
				if(linha==3)
					printf("\n");
			}
			else
			{
				printf("  ");
				if((linha==3)&&(coluna!=3))
					printf("\n");
			}
		}
	}
}
