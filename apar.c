#include <stdio.h>

#define TAM 5

void mostrarVetor(int[], int);

int main(){
	int numeros[TAM], sem_rep[TAM] = {0}, contagem[TAM]={0}, conta = 0, p;

	printf("Go!!\n");
	for (int i = 0; i < TAM; i++)
	{
		scanf("%d", &numeros[i]);
	}
	while(conta<TAM){
		for (p = 0; p < TAM; p++)
		{
			if(numeros[conta] == sem_rep[p])
			{
				printf("if\n");
				contagem[p]++;
				
				break;
			}
			else if (numeros[conta] != sem_rep[p] && sem_rep[p] == 0)
			{
				printf("else if\n");
				sem_rep[p] = numeros[conta];
				contagem[p]++;
				break;
			}
			else
			{
				printf("else\n");
				
			}
			printf("Fim do for\n");
			
		}
		conta++;
		printf("fim do While\n");
	}
	mostrarVetor(numeros, TAM);
	mostrarVetor(sem_rep, TAM);
	mostrarVetor(contagem, TAM);


	int maior = contagem[0], indice = 0;
	for (int i = 0; i < TAM; i++)
	{
		if (maior < contagem[i])
		{
			maior = contagem[i];
			indice = i;

		}
	}
	printf("O numero que mais aparcece é o %d\n", sem_rep[indice]);
	return 0;
}


void mostrarVetor(int vetor[], int tam){
	for (int i = 0; i < tam; i++)
	{
		printf("%d ", vetor[i]);

	}
	printf("\n");
}