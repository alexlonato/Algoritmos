/*
02) Criar um algoritmo para preencher com valores num�ricos uma matriz 3 x 3 
e que em seguida exiba na tela os elementos que n�o fazem parte da diagonal principal.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[3][3];
	int coluna, linha;
	
	printf("Preencha a matriz. (3X3)\n");

	for(coluna=0;coluna<3;coluna++)
	{
		for(linha=0;linha<3;linha++) 
		{
			printf("Insira o n�mero da %d� linha e %d� coluna: ", coluna+1, linha+1);
			scanf("%d", &mat1[coluna][linha]);			
		}		
	}
	
	printf("\nMatriz digitada.\n");
	
	for(coluna=0;coluna<3;coluna++)
	{
		for(linha=0;linha<3;linha++) 
		{		
			printf("%d ", mat1[coluna][linha]);	
			if(linha==2)
				printf("\n");
			
		}
	}
	
	printf("\nA matriz digitada, sem a diagonal principal �: \n");
	
	for(coluna=0;coluna<3;coluna++)
	{
		for(linha=0;linha<3;linha++) 
		{		
			if(coluna==linha)
				printf("  ");
			else
			{
				printf("%d ", mat1[coluna][linha]);	
				if(linha==2)
					printf("\n");
			}
		}
	}

}
