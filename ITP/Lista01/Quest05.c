#include <stdio.h>
#include <stdlib.h>

void ap(int*, int);

int main(){
	int i, j, N;
	int* ptr_vetor;

	scanf("%d", &N);

	ptr_vetor = (int*) malloc(N*sizeof(int));

	for (i = 0; i < N; i++)
	{
		scanf("%d", ptr_vetor+i);
	}

	ap(ptr_vetor, N);
	return 0;
}

void ap(int* ptr_vetor, int n){
	int i, j, cont=0, vezesAp, numero;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(ptr_vetor+i) == *(ptr_vetor+j))
			{
				cont++;
			}
		}
		if (cont > vezesAp)
		{
			numero = *(ptr_vetor+i);
			vezesAp = cont;
		}
		cont=0;
	}
	printf("O numero %d apareceu %d vezes\n", numero, vezesAp);
}