#include <stdio.h>
#include "funcoes.h"
#include <math.h>

#define TAM 10

int mediaVetor(int[], int);
int numeroPredominate(int[], int);


int main(){
	int alturas[TAM] = {1,2,4,4,5,5,7,6,8,4}, valorAtual; 
	float DP = 0, media, somatorio;

	printf("Go!!\n");

	media = mediaVetor(alturas, TAM);

	printf("A media das alturas é %.2f\n", media);

	for (int i = 0; i < TAM; i++)
	{
		valorAtual = alturas[i];
		somatorio+=pow(valorAtual, 2);
	}
	DP = (somatorio/TAM) - pow(media, 2);
	printf("O desvio padrao é %.2f\n", DP);

	printf("Altura que mais aparece: %d\n", numeroPredominante(alturas, TAM));
	return 0;
}
