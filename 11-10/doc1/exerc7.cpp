/*7) Escrever um nome e escrev�-lo de tr�s pra frente.*/





#include <stdio.h>
#include <string.h>
main()
{
	char nome[20];
	int i, totNome;
	
	printf("Escreva um nome: ");
	gets(nome);
	
	totNome = strlen(nome);
	
	for(i=totNome-1;i>=0;i--)
	{
		printf("%c", nome[i]);
	}		
}
