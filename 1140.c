#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_SZ 1000
int main()
{
	char frase[MAX_SZ];
	char compara;
	char resultado;
	int i;

	fgets( frase, MAX_SZ, stdin );
	

	do
	{

		for (i=0; i < strlen(frase); i++)
			frase[i]=tolower(frase[i]);

		compara = frase[0];

		resultado = 'Y';

		for (i=0; i < strlen(frase); i++)
		{
			if (frase[i] == ' ')
			{
	
				if(compara != frase[i+1])
				{
					resultado = 'N';

				}
				else
				{
					if (resultado != 'N')
						resultado = 'Y';
				}

			}
		}
	printf("%c\n", resultado);

	  fgets( frase, MAX_SZ, stdin );
	}
	while (frase[0] != '*');

	return 0;
}
