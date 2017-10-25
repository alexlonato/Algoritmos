/*Fazer um programa para que o usuário possa digitar seu nome na tela 10 vezes. Um nome por linha.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
	char nome[20];
	int i;
	
	printf("Digite seu nome 10 vezes:\n");
	
	for(i=0;i<10;i++)
		scanf("%s", &nome);
		getchar();

}	
