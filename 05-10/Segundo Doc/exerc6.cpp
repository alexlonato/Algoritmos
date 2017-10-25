/*
	6) Fazer um programa para criar as seguintes funções: 
	Função preencher Vetor, imprimir o Vetor, imprimir o quadrado, imprimir o primeiro e o último numero.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int scanVetor(int pos)
	{
		int vet[pos], i;
		
		printf("\nPreenchimento de vetor com %d posições.\n", pos);
		
		for(i=0;i<pos;i++)
		{
			printf("Insira o %dº número do vetor: ", i+1);
			scanf("%d", &vet[i]);
		}
	}

int printVetor(int vet[], int pos)
	{
		int i;
		
		printf("\nVetor inserido: \n");
		
		for(i=0;i<pos;i++)
			printf("Posição %d: %d\n", i, vet[i]);
	}
	
int printVetorQuadrado(int vet[], int pos)
	{
		int i;
		
		printf("\nVetor inserido: \n");
		
		for(i=0;i<pos;i++)
			printf("Posição %d: %d\n", i, vet[i]*vet[i]);
	}

int printVetorPrimeiro_Ultimo(int vet[], int pos)
	{
			
		printf("\nPrimeiro número do vetor inserido: %d\n", vet[0]);
		printf("\nÚltimo número do vetor inserido: %d\n", vet[pos-1]);
		
	}
	
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[11], pos;
	int i, j=0, aux;
	
	printf("------   Bem vindo!   ------\n\nO que deseja fazer\n");
	
	printf("Preencha um vetor.\n");
	printf("Insira o número de posições do vetor: ");
	scanf("%d", &pos);
	
	scanVetor(pos);
	
	menu:
		
	printf("\n1) Mostrar o vetor preenchido.\n");
	printf("2) Mostrar o vetor com cada valor ao quadrado.\n");
	printf("3) Mostrar o primeiro e o último número do vetor preenchido.\n");
	
	scanf("%d", &aux);
	
	if(aux==1)
	{
		printVetor();
	}
	
	
	
}
