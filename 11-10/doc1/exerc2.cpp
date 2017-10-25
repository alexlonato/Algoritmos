/*

	2) Receber um nome no teclado e imprimir quantas letras "a" ou "A" tem o nome.

*/
#include <stdio.h>
#include <string.h>

main()
{
	char nome[20];
	int i, conta = 0, t;
	
	printf("Escreva um nome: ");
	gets(nome);

	t = strlen(nome);
	
	for(i=0;i<t;i++)
	{
		if((nome[i]=='a')||(nome[i]=='A'))
		conta++;
	}
	
	printf("O nome digitado possui quantidade de letras a ou A: %d", conta);
}
