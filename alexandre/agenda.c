#include <stdio.h>
#include <string.h>

	
int main(){
	typedef struct
	{
		int dia;
		int mes;
		int ano;
	}data;

	struct agenda
	{
		char desc[5][50];
		data dt[5];
	}tarefa;

	tarefa.dt[1].dia = 2;
	tarefa.dt[2].dia = 3;
	tarefa.dt[3].dia = 2;

	
	gets(tarefa.desc[1]);
	gets(tarefa.desc[2]);
	gets(tarefa.desc[3]);
	for (int i = 0; i < 5; i++)
	{
		if (tarefa.dt[i].dia == 2)
		{
			printf("%s\n", tarefa.desc[i]);
		}
	}

	printf("%d\n", tarefa.dt[1].dia);
	return 0;
}