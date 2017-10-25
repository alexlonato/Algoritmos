/*3. Apresentar todos os números divisíveis por 4 que sejam menores que 200.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
	int i;
	
	for(i=1;i<200;i++)
	{
		if(i%4==0)
			printf("%d ", i);
	}
}
