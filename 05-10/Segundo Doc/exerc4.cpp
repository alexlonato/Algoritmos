/*
	4) Preencher um vetor com os n�meros 10 a 20, e depois mostrar os elementos pares do vetor de tr�s para frente. 
	E tamb�m mostrar os n�meros �mpares.
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

	printf("N�meros pares dentro do vetor(de tr�s para frente): ");
	for(i=10;i>=0;i--)
	{
		if(vet[i]%2==0)
			printf("%d ", vet[i]);
	}
	printf("\nN�meros �mpares dentro do vetor: ");
	for(i=0;i<11;i++)
	{
		if(vet[i]%2!=0)
			printf("%d ", vet[i]);
	}
	
	
	
}
