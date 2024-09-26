#include <stdio.h>

int main (void)
{

	int n1, n2, i, j, casos;
	int aux, aux2;

	scanf("%d", &casos);

	while (casos--)
	{

		scanf("%d %d", &n1, &n2);

		for (i = n1; i <= n2; i++)
			printf("%hu", i);


		for (i = n2; i >= n1; i--)
		{
			aux = i;
			while (aux)
			{
				aux2 = aux%10;
				printf("%hu", aux2);
				aux = aux/10;
			}

		}	

		printf("\n");
	}
    return 0;
}
