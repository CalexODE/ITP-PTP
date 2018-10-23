#include <stdio.h>
#include <stdlib.h>

void repetidos(int*, int, int*, int*);

int main(){
	int numero = 0, repeticoes = 0;
	int n, i, j;
	printf("Numero de elementos: ");
	scanf("%d", &n);

	int* vetor = (int*) malloc(n*sizeof(int));

	printf("Seus elementos:\n");
	for (i = 0; i < n; i++)
	{
		printf("Elemento %d: ", i+1);
		scanf("%d", (vetor+i));
	}
	for (j = 0; j < n; j++)
	{
		printf("%d ", *(vetor+j));
	}
	printf("\n");

	repetidos(vetor, n, &numero, &repeticoes);
	printf("%d %d\n", numero, repeticoes);
	return 0;
}

void repetidos(int* ptr, int n, int* num, int* rep){
	int numero, escolhido;
	int quantidade = 0;
	int repeticoes = 0;
	int i, j;
	for (i = 0; i < n; i++)
	{
		numero = *(ptr+i);
		repeticoes = 0;
		for (j = 0; j < n; j++)
		{
			if(numero == *(ptr+j))
			{
				repeticoes++;
			}
		}
		if (*rep < repeticoes)
		{
			*num = numero;
			*rep = repeticoes;
		}
	}
}