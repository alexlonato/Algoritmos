/*
	3) Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem nos 3 nome.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[3][20];
	int i, j=0, totChar[3], contaLetraA=0, contaLetraE=0;
	
	for(i=0;i<3;i++)
	{
		printf("Digite o %dº nome: ", i+1);
		gets(nome[i]);
		totChar[i]=strlen(nome[i]);
		for(j=0;j<totChar[i];j++)
		{
			if((nome[i][j]=='a') || (nome[i][j]=='A'))
				contaLetraA++;
			else if ((nome[i][j]=='e') || (nome[i][j]=='E'))
				contaLetraE++;
		}
	}

	
	printf("\nO total de letras A é: %d.\nO total de letras E é: %d.", contaLetraA, contaLetraE);
	
	
}
