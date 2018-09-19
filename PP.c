#include <stdio.h>
#include <stdlib.h>

int main(){

	int linhas;
	int colunas;
	int j, k, i, x, y, a;

	printf("Quantidade de Linhas: ");
	scanf("%d", &linhas);

	printf("Quantidade de Colunas: ");
	scanf("%d", &colunas);

	//reserva espaço para as linhas
	int **m = (int **) malloc (linhas * sizeof(int*));

	//reserva espaço para as colunas
	for (i = 0; i < linhas; i++)
	{
		m[i] = (int*) malloc(colunas * sizeof(int));
	}

	//recebe os valores
	for (k = 0; k < linhas * colunas; k++)
	{
		scanf("%p", (m+k));
	}
	//printf("Passou\n");
	printf("%d\n", k);

	//Mostra os valores na tela

	
	for (x = 0; x < linhas; x++)
	{
		printf("%d\n", m[x][0]);
		for (y = 0; y < colunas; y++)
		{
			printf("%d ", m[x][y]);
		}
	}
	

	for (a = 0; a < linhas * colunas; a++)
	{
		printf("%d ", *(m+a));
	}
	return 0;
}