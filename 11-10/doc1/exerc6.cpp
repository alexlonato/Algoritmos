/*6) Preencher um vetor com n�meros inteiros (8unidades); solicitar um n�mero do teclado.
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor e qual a ordem foi digitada. 
Se n�o existir, imprimir mensagem que n�o existe.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num[8], num2 = 0;
	int i, j=0;
	
	printf("Preencha o vetor com 8 n�meros.\n");
	
	for(i=0;i<8;i++)
	{
		printf("Insira o %d� n�mero do vetor: ", i+1);
		scanf("%d", &num[i]);		
	}
	
	printf("\nAgora insira um n�mero qualquer: ");
	scanf("%d", &num2);
	
	for(i=0;i<8;i++)
	{
		if(num2==num[i])
			printf("N�mero digitado est� na posi��o %d do vetor.", i+1);
			j=1;
	}
	
	if(j=0)
		printf("N�mero digitado n�o est� no vetor.");
	
	
	
}
