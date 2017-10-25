/*

	1) Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.

*/
#include <stdio.h>
#include <string.h>

main()
{
	char nome[20];
	int i, t;
	
	printf("Escreva um nome: ");
	gets(nome);

	t = strlen(nome);
	
	for(i=0;i<t;i++)
	{
		printf("\n%s", nome);
	}	
}
