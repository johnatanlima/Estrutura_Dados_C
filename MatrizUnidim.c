#include <stdio.h>
#include <stdlib.h>
#define linha 2
#define col 2

int main(){
	
	int *matriz;
	int i;
	
	matriz = (int*)malloc(linha*col*sizeof(int));
	if(matriz == NULL){
		printf("Memoria não alocada \n");
		exit(1);
	}
	
	for(i=0; i < linha*col; i++){
		matriz[i] = i;
	}
	
	printf("%i", matriz[1]); //Retorna o numero 1. Pois a matriz foi preenchida 0, 1, 2, 3. matriz (2x2). 1 está lin0 col1
	
	return 0;
}

//Numa matriz unidimensionl, usamos o seguinte calculo para capturarmos um indice especifico. 
// k = i * n + j ; i = linha que está o elemento. n = tamanho da matriz. 2x2 (linha*col); j = coluna que está o elem. 
//então o indice k = 0 
//int indice = 0 * linha * col + 1. 
