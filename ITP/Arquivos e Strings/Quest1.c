#include <stdio.h>
#include <stdlib.h>

#define QTD 10

void gravarEmArquivo(FILE*,char*);


int main(){
	int i = 0, J;
	char * ptr_notas;

	ptr_notas = (char*) malloc(QTD*sizeof(char));

	do{
		gets(ptr_notas+i);
		i++;
	}while(i <= 9);


	for (J = 0; J < QTD; J++)
	{
		printf("%c\n", *(ptr_notas+J));
	}

	FILE *arq_saida = fopen("saida.txt", "w");
	
	gravarEmArquivo(arq_saida, ptr_notas);
	
	fclose(arq_saida);
	free(ptr_notas);
	return 0;
}

void gravarEmArquivo(FILE* saida, char* vetor){
	int i;
	for (i = 0; i < QTD; i++)
	{
		fprintf(saida, "%c", *(vetor+i));
		if (i < (QTD-1))
		{
			fprintf(saida, ",");
		}
	}
}