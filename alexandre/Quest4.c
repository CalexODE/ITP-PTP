#include <stdio.h>
#include <stdlib.h>

float media(float*, float);

int main(){
	int i;
	float n = 0;

	printf("Quantidade de notas: ");
	scanf("%f", &n);
	printf("Notas: \n");

	float* vetor = (float*) malloc(n*sizeof(float));

	for (i = 0; i < n; i++)
	{	
		printf("Nota %d: ", i+1);
		scanf("%f", vetor+i);
	}
	for (i = 0; i < n; i++)
	{
		printf("%f ", *(vetor+i));
	}
	float m = media(vetor, n);
	printf("\nA media eh: %.2f\n", m);
	return 0;
}

float media(float* v, float n){
	float soma = 0;
	float media = 0;
	for (int i = 0; i < n; i++)
	{
		printf("\n %f n = %f, soma = %f", *(v+i) , n, soma);
		soma+=*(v+i);
	}
	printf("\nsoma final = %f\n", soma);
	media = soma/n;
	return media;
}