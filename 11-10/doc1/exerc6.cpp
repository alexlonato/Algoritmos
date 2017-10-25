/*6) Preencher um vetor com números inteiros (8unidades); solicitar um número do teclado.
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor e qual a ordem foi digitada. 
Se não existir, imprimir mensagem que não existe.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num[8], num2 = 0;
	int i, j=0;
	
	printf("Preencha o vetor com 8 números.\n");
	
	for(i=0;i<8;i++)
	{
		printf("Insira o %dº número do vetor: ", i+1);
		scanf("%d", &num[i]);		
	}
	
	printf("\nAgora insira um número qualquer: ");
	scanf("%d", &num2);
	
	for(i=0;i<8;i++)
	{
		if(num2==num[i])
			printf("Número digitado está na posição %d do vetor.", i+1);
			j=1;
	}
	
	if(j=0)
		printf("Número digitado não está no vetor.");
	
	
	
}
