/*
	2) Preencher um vetor com os n�meros pares do n�mero 2 a 20 e exibir os resultados do vetor.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10];
	int i, j=0;
	
	printf("N�meros pares de 2 a 20: ");
	
	for(i=0;i<=20;i++)
	{
		
		if((i%2==0)&&(i!=0))
		{
			vet[j]=i;
			printf("%d ", vet[j]);
			j++;
		}
	}
	
	

}
