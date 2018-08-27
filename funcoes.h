#include <stdio.h>

void mostrarVetor(int vetor[], int tam){
	for (int i = 0; i < tam; i++)
	{
		printf("%d\n", vetor[i]);
	}
}

int mediaVetor(int vetor[], int tam){
	int soma=0, media;
	for (int i = 0; i < tam; i++)
	{
		soma+=vetor[i];
	}
	media = soma/tam;
	return media;
}
int numeroPredominante(int vetor[], int tam){
	int sem_repeticao[] = {0,0,0,0,0,0,0,0,0,0}, contagem[] = {0,0,0,0,0,0,0,0,0,0}, atual, p=0, maior, num, prox = 0;
	for (int i = 0; i < tam; i++)
	{
		atual = vetor[i];
	
		for (p = 0; p < tam; p++)
		{
			if (atual == sem_repeticao[p])
			{
				contagem[p]++;
				break;
			}
			if (sem_repeticao[p]==0)
			{
				sem_repeticao[p] = atual;
				break;
			}
		}
	}
	maior = contagem[0];
	for (int j = 0; j < tam; j++)
	{
		if (maior<contagem[j])
		{
			num = sem_repeticao[j];
			maior = contagem[j];
		}
	}
	mostrarVetor(sem_repeticao, tam);
	mostrarVetor(contagem, tam);

	return num;
}