#include <stdio.h>

#define TAM 10

int main(){
	int vetor[TAM], i, j;
	for (i = 0; i < TAM; i++)
	{
		scanf("%d", &vetor[i]);
	}
	
	int cont=0, atual, mais=0, numMais, conta=0;
	while(conta < TAM)
	{	
		atual = vetor[conta];
		for (j = conta; j < TAM; j++)
		{
			if (vetor[conta] == vetor[j])
			{
				cont++;
			}
		}
		if(mais<cont)
		{
			numMais = vetor[conta];
			mais = cont;
		}
		//printf("cont=%d, atual=%d, mais=%d, numMais=%d, conta=%d\n", cont,atual,mais,numMais,conta);
		conta++;
		cont=0;
	}
	printf("%d\n", numMais);
	return 0;
}