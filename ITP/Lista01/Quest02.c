#include <stdio.h>
#include <stdlib.h>

int main(){
	int cont=0, i, j, n=1, cont_neg=0, cont_pos=0;
	int* ptr_v, *ptr_neg, *ptr_pos;

	ptr_v = (int*) malloc(1*sizeof(int));
	ptr_neg = (int*) malloc(1*sizeof(int));
	ptr_pos = (int*) malloc(1*sizeof(int));

	while(n != 0){
		scanf("%d", &n);
		*(ptr_v+cont) = n;
		cont++;
		ptr_v = (int*)realloc(ptr_v, cont*sizeof(int));
	}

	printf("Total: %d\n", (cont-1));
	for (i = 0; i < (cont-1); i++)
	{
		if(*(ptr_v+i)>0)
		{
			*(ptr_pos+cont_pos) = *(ptr_v+i);
			cont_pos++;
			ptr_pos = (int*) realloc(ptr_pos, (cont_pos+1)*sizeof(int));
		}
		else if(*(ptr_v+i)<0)
		{
			*(ptr_neg+cont_neg) = *(ptr_v+i);
			cont_neg++;
			ptr_neg = (int*) realloc(ptr_neg, (cont_neg+1)*sizeof(int));
		}
	}

	printf("Positivos: %d ->", cont_pos);
	for (i = 0; i < (cont_pos); i++)
	{
		printf(" %d", *(ptr_pos+i));
	}

	printf("\nNegativos: %d ->", cont_neg);
	for (j = 0; j < cont_neg; j++)
	{
		printf(" %d", *(ptr_neg+j));
	}
	printf("\n");
	free(ptr_neg);
	free(ptr_pos);
	free(ptr_v);
	return 0;
}