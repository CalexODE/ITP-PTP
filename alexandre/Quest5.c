#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	int num, f;
	char nome[14];
	int *votos;
	int escolha;
	int contador = 0;

	votos = (int*) malloc(10*sizeof(int));
	for (i = 0; i < 10; i++)
	{
		*(votos+i) = 0;
	}
	FILE* candidatos = fopen("candidatos.txt", "r");
	if(candidatos == NULL){
		printf("Erro\n");
		return -1;
	}

	// for (i = 0; i < 5; i++)
	// {
		scanf("%d", &escolha);
		contador=0;
		while (fscanf(candidatos, "%d %s", &num, nome)!=EOF)
		{

			if(num == escolha){
				*(votos+contador)+=1;
				break;
			}
			if(num == 0){
				*(votos+contador)+=1;
			}
			printf("%s - %d\n", nome, num);
			contador++;
		}
	// }
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(votos+i));
	}
	fclose(candidatos);
	return 0;
}