/*4) Exibir o total do somat�rio, a m�dia e o total de valores lidos. 
O programa deve fazer as leituras dos valores enquanto o usu�rio estiver fornecendo valores positivos. 
Ou seja, o programa deve parar quando o usu�rio fornecer um valor negativo. */

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
			printf("\nEsse � o %d� n�mero a ser digitado.", i+1);
			printf("\nO somat�rio de todos os n�meros j� digitados �: %d", soma);
			printf("\nA m�dia de todos os n�meros j� digitados �: %.1f\n", med);
			j++;
		}
			
	}
}
