#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main ()
{

	char texto[51], resultado[51], lixo;
	unsigned short i, j;
	unsigned casos;

	scanf("%u", &casos);
	getchar(); // scanf buffer fix;

	while (casos--)
	{
		
		scanf("%[^\n]", texto);
		getchar(); // scanf buffer fix;
	
		i = 0;
		j = 0;

		// last untl the end of the string;
		while (texto[i])
		{

			// if it's a space, skip it;
			if (texto[i] == ' ')
				i++;
	
			else
			{	
                // Copy the letter to the result string;
				resultado[j++] = texto[i++];

				
				while (isalpha(texto[i]))
					 i++;	
			}	
		}

		resultado[j] = '\0';
		printf("%s\n", resultado);
		memset(resultado, 0, sizeof(resultado));
	}

}