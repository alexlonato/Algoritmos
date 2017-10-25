/*3 - Fazer um programa para que o usuário digite um nome e exiba na tela apenas as letras que se encontram na posição par.
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
		
	printf("As letras que se encontram em posição par são: \n");
	
	for(i=0;i<strlen(nome);i++)
	{	
		if(i%2!=0)
		{
			printf("Posição %d: \"%c\"\n", i+1, nome[i]);	
		}
		
	}
	
	return 0;
}	
