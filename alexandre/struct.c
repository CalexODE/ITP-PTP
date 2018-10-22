#include <stdio.h>
#include <string.h>

int main(){
	struct dados{
		char nome[5][100];
	}pessoa;

	int i, contador = 0, retorno = 1;
	for (i = 0; i < 5; i++)
	{
		gets(pessoa.nome[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pessoa.nome[i]);
	}
	for (i = 0; i < 5; i++)
	{
		for (int c = i + 1; c < 5; c++)
		{
			retorno = strcmp(pessoa.nome[i], pessoa.nome[c]);
			printf("%s, ->c %d\n", pessoa.nome[c], c);
			if (retorno == 0)
			{
				printf("%s\n", pessoa.nome[c]);
				contador++;
			}
		}
	}
	if (contador==0)
	{
		printf("Apenas nomes diferentes\n");
	}
	return 0;
}