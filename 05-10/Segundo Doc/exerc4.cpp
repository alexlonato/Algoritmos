/*
	4) Preencher um vetor com os números 10 a 20, e depois mostrar os elementos pares do vetor de trás para frente. 
	E também mostrar os números ímpares.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	system("color E");
	
	int vet[11];
	int i, j=0;
	
	for(i=0;i<=20;i++)
	{
		if(i>=10)
		{
			vet[j]=i;
			j++;
		}
	}

	printf("Números pares dentro do vetor(de trás para frente): ");
	for(i=10;i>=0;i--)
	{
		if(vet[i]%2==0)
			printf("%d ", vet[i]);
	}
	printf("\nNúmeros ímpares dentro do vetor: ");
	for(i=0;i<11;i++)
	{
		if(vet[i]%2!=0)
			printf("%d ", vet[i]);
	}
	
	
	
}
