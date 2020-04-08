#include <stdio.h>
#include <stdlib.h>

#define linha 2
#define col 3

int main(){
	
	int **matriz; //matriz, para linhas, é um vetor. dentro de cada posição, eu tenho um endereço de mais um vetor.
	int i;
	
	matriz = (int**)malloc(linha*sizeof(int)); //alocando espaço na memoria para um vetor de ponteiros [*,*, *, *, endereços]
	
	for(i - 0; i < linha; i++)
	{
		matriz[i] = (int*)malloc(col * sizeof(int)); //Se dentro de cada posicao vai um endereço pra um vetor, então 
													//para cada posicaçao, eu armazeno o endereço de outro vetor. 
	}
	
	matriz[0][0] = 10;
	matriz[0][1] = 20;
	
	printf("É para mostrar o valor 10 -> %i \n", matriz[0][1]);
	
	for(i = 0; i < linha; i++)
	{
		free(matriz[i]); //liberando o espaço de memoria de cada linha da matriz.
	}
	
	free(matriz);
	
	return 0;
}

