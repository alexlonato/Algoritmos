/*2 - Fazer um programa para digitar um nome com mais de 5 posições, calcule e mostre quantas letras tem. 
Para que o programa seja finalizado, basta digitar algo com menos de 4 letras
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char nome[20];
	int i, j=1;
	
	
	for(i=0;i<j;i++)
	{	
		printf("Digite um nome: ");
		scanf("%s", &nome);
		getchar();
		
		if(strlen(nome)<5)
			return (0);
		
		else
		{
			printf("\nO total de caracteres da palavra digitada é: %d\n", strlen(nome));
			j++;
		}
	}
}	
