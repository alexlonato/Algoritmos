/*4) Exibir o total do somatório, a média e o total de valores lidos. 
O programa deve fazer as leituras dos valores enquanto o usuário estiver fornecendo valores positivos. 
Ou seja, o programa deve parar quando o usuário fornecer um valor negativo. */

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num[2] = {0, 0}, soma;
	int i, j=1;	
	float med;
	
	for(i=0;i<=j;i++)
	{
		printf("\nInsira um numero positivo: ");
		scanf("%d", &num[0]);
		
		if(num[0]<0)
			i=j;
		else
		{
			num[1] = num[1] + num[0];
			soma = num[1];
			med = (float) (soma/(i+1));
			printf("\nEsse é o %dº número a ser digitado.", i+1);
			printf("\nO somatório de todos os números já digitados é: %d", soma);
			printf("\nA média de todos os números já digitados é: %.1f\n", med);
			j++;
		}
			
	}
}
