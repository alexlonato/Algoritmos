/*
03) Criar um algoritmo para preencher uma matriz 3 x 3 com número inteiros 
e depois exibir na tela outra matriz (matriz nova) multiplicando cada elemento da primeira matriz por 2.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[3][3], mat2[3][3];
	int coluna, linha;
	
	printf("Preencha a matriz. (3X3)\n");

	for(coluna=0;coluna<3;coluna++)
	{
		for(linha=0;linha<3;linha++) 
		{
			printf("Insira o número da %dº linha e %dª coluna: ", coluna+1, linha+1);
			scanf("%d", &mat1[coluna][linha]);
			mat2[coluna][linha] = mat1[coluna][linha]*2;
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
	
	printf("\nA matriz digitada, multiplicando cada elemento por 2: \n");
	
	for(coluna=0;coluna<3;coluna++)
	{
		for(linha=0;linha<3;linha++) 
		{		
			printf("%d ", mat2[coluna][linha]);	
			if(linha==2)
				printf("\n");
		}
	}

}
