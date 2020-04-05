#include <stdio.h>
#include <stdlib.h>

void funcaoMatriz(float mat[][2]){ //Pq diabos eu omito o nº de linhas? Pq quando passamos matriz por parametro, ele já vai 
									//apontar para a primeira linha da matriz passada.
	int i;
	int j;
	
	for(i=0; i < 2; i++){
		for(j=0; j < 2; j++){
			printf(" Linha %i -> %.2f \t", i, mat[i][j]);
		}
		printf("\n");
	}

}

int main(){

	float mat[2][2] = { {1,2}, {3,4} };

	funcaoMatriz(mat);
	
	return 0;
}

  
