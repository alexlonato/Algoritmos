/*
9) Ler um vetor vet de 10 elementos e obter um vetor quadrado cujos
 componentes deste vetor s�o o quadrado dos respectivos componentes de vet.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vet1[10], vet2[10];
	int i;

	for(i=0;i<10;i++)
	{
		printf("Insira o %d� n�mero do vetor: ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("\nVETOR 2(Quadrado de cada numero digitado no vetor 1)\n");
	
	for(i=0;i<10;i++)
	{
		vet2[i]=vet1[i]*vet1[i];
			printf("Posi��o: %d // N�mero: %d\n", i, vet2[i]);
	}
	
	
	
}
