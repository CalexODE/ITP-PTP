#include <stdio.h>

typedef struct
	{
		int dia;
		int mes;
		int ano;
	}dma;

int main(){
	int dia=0, mes=0, ano=0;
	dma teste data_inicial, data_final;
	dma *ptr;
	ptr = &teste;
	ptr->dia = 2;
	
	
	scanf("%d",&data_inicial.dia);
	scanf("%d",&data_inicial.mes);
	scanf("%d",&data_inicial.ano);

	scanf("%d",&data_final.dia);
	scanf("%d",&data_final.mes);
	scanf("%d",&data_final.ano);

	if (data_final.dia - data_inicial.dia<0)
	{
		dia = data_final.dia - data_inicial.dia + 31;
	} else {
		dia = data_final.dia - data_inicial.dia;
	}
	if (data_final.mes - data_inicial.mes<0)
	{
		mes = data_final.mes - data_inicial.mes + 12;
	} else {
		mes = data_final.mes - data_inicial.mes;
	}
	ano = data_final.ano - data_inicial.ano;

	printf("%d/%d/%d\n", ptr->dia, mes, ano);

	return 0;
}