#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 3
#define MEDIA 5
#define INFO 2

int main(){
	int i, j, cont_apr=0, cont_rep=0;
	int* ptr_ficha, *ptr_apr, *ptr_rep;

	//Todos os alunos
	ptr_ficha = (int**) malloc(ALUNOS*sizeof(int*));
	for (i = 0; i < ALUNOS; i++)
	{
		*(ptr_ficha+i) = (int*) malloc(INFO*sizeof(int));
	}

	//Alunos Aprovados
	ptr_apr = (int**) malloc(ALUNOS*sizeof(int*));
	for (i = 0; i < ALUNOS; i++)
	{
		*(ptr_apr+i) = (int*) malloc(INFO*sizeof(int));
	}

	//Alunos Reprovados
	ptr_rep = (int**) malloc(ALUNOS*sizeof(int*));
	for (i = 0; i < ALUNOS; i++)
	{
		*(ptr_rep+i) = (int*) malloc(INFO*sizeof(int));
	}

	for (j = 0; j < ALUNOS*INFO; j++)
	{
		scanf("%d", (ptr_ficha+j));
	}
	for (i = 0; i < ALUNOS*INFO; i++)
	{
		if ((i+1)%INFO==0){
			if (*(ptr_ficha+i)>=MEDIA)
			{
				//printf("(ok %d i: %d) ", *(ptr_ficha+i),i);
				for (j = (i-(INFO-1)); j <= i; j++)
				{
					printf("'%d ", j);
					*(ptr_apr+cont_apr) = *(ptr_ficha+j);
					cont_apr++;
				}
			}
			else if (*(ptr_ficha+i)<MEDIA)
			{
				//printf("(nada ok %d i: %d) ", *(ptr_ficha+i),i);
				for (j = (i-(INFO-1)); j <= i; j++)
				{
					printf("'%d ", j);
					*(ptr_rep+cont_rep) = *(ptr_ficha+j);
					cont_rep++;
				}
			}
		}
		printf("%d ", *(ptr_ficha+i));
		if ((i+1)%INFO==0)
		{
			printf("\n");
		}
	}
	printf("Aprovados: %d\n", cont_apr);
	for (i = 0; i < INFO*(cont_apr/INFO); i++)
	{
		printf(" %d", *(ptr_apr+i));
		if ((i+1)%INFO==0)
		{
			printf("\n");
		}
	}
	printf("Reprovados: %d \n", cont_rep);
	for (i = 0; i < INFO*(cont_rep/INFO); i++)
	{
		printf(" %d", *(ptr_rep+i));
		if ((i+1)%INFO==0)
		{
			printf("\n");
		}
	}
	return 0;
}