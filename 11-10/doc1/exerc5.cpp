/*5) Escrever um programa que leia, valores inteiros, at� ser lido o valor -99. 
Quando isso acontecer o programa dever� escrever a soma e a m�dia dos valores lidos.*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, conta = 0;
	float soma = 0;
	
	printf("\nInsira um n�mero inteiro: ");
	scanf("%d", &num);
	
	while(num!=-99)
	{	
		conta++;
		soma = soma + num;
		
		printf("\nInsira um n�mero inteiro: ");
		scanf("%d", &num);
	}
	printf("%d", conta);
	printf("A soma eh: %.2f\nA media eh: %.2f", soma, soma/conta);
}
