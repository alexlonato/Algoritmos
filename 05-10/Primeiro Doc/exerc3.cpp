/*3 - Fazer um programa para que o usu�rio digite um nome e exiba na tela apenas as letras que se encontram na posi��o par.
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
		
	printf("As letras que se encontram em posi��o par s�o: \n");
	
	for(i=0;i<strlen(nome);i++)
	{	
		if(i%2!=0)
		{
			printf("Posi��o %d: \"%c\"\n", i+1, nome[i]);	
		}
		
	}
	
	return 0;
}	
