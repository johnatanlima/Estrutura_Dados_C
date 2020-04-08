#include <stdio.h>
#include <stdlib.h>

#define linha 2
#define col 3

int main(){
	
	int **matriz; //matriz, para linhas, � um vetor. dentro de cada posi��o, eu tenho um endere�o de mais um vetor.
	int i;
	
	matriz = (int**)malloc(linha*sizeof(int)); //alocando espa�o na memoria para um vetor de ponteiros [*,*, *, *, endere�os]
	
	for(i - 0; i < linha; i++)
	{
		matriz[i] = (int*)malloc(col * sizeof(int)); //Se dentro de cada posicao vai um endere�o pra um vetor, ent�o 
													//para cada posica�ao, eu armazeno o endere�o de outro vetor. 
	}
	
	matriz[0][0] = 10;
	matriz[0][1] = 20;
	
	printf("� para mostrar o valor 10 -> %i \n", matriz[0][1]);
	
	for(i = 0; i < linha; i++)
	{
		free(matriz[i]); //liberando o espa�o de memoria de cada linha da matriz.
	}
	
	free(matriz);
	
	return 0;
}

