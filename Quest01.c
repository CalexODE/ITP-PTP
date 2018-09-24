#include <stdio.h>
#include <stdlib.h>

void filter(int * first, int * last){
	int i, j, cont = 0, aux=0, alocados = 0;
	for (i = 0; i < *last; i++)
	{
		
		for (j = cont; j < *last; j++)
		{
			if (*(first+i)>0)
			{
				cont++;
				break;
			}
			printf("first-i: %d, first-j: %d, i: %d, j: %d, last: %d\n", *(first+i), *(first+j), i, j, *last-1);
			if(*(first+j) > 0){
				*(first+i) = *(first+j);
				cont = j+1;
				break;
			}
			
			if (i == *last) 
			{
				//printf("não pode ser\n");
				aux = 3;
			}
			//printf("first: %d, i: %d, j: %d, last: %d\n", *first, i, j, *last-1);
			
		}
		//printf("%d\n", aux);
		if (aux == 3)
		{
			//printf("serio?\n");
			break;
		}
	}
}

int main(){
	int i, j, N;
	int* ptr_vetor;

	scanf("%d", &N);

	ptr_vetor = (int*) malloc(N*sizeof(int));

	for (i = 0; i < N; i++)
	{
		scanf("%d", ptr_vetor+i);
	}

	filter(ptr_vetor, &N);

	for (j = 0; j < N; j++)
	{
		printf("%d\n", *(ptr_vetor+j));
	}
	return 0;
}