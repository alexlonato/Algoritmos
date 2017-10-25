/*4 - Fazer um programa para digitar um nome e exibi-lo tantas vezes quantos forem seus caracteres. 
Exemplo: um nome com 8 letras, terá a aparição do nome 8 vezes na tela.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char nome[80];
	int i;
	
	printf("Digite um nome: ");
	scanf("%s", &nome);
	getchar();
		
	printf("Nome digitado: %s.\nTotal de caracteres e vezes de exibição: %d\n", nome, strlen(nome));
	
	for(i=0;i<strlen(nome);i++)
	{	
	
		printf("\n%s", nome);	
		
	}
	
	return 0;
}	
