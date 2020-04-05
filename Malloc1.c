#include <stdio.h>
#include <stdlib.h>

#define max 10

int main(){

	int *v;
	
	v = (int*)malloc(max * sizeof(int));
	
	if(v == NULL ){
		printf("Malloc não conseguiu reservar um espaço na memória. \n\n");	
		exit(1);
	}
	
	v[0] = 10;
	v[1] = 20;
	
	printf("Valor no index 0 - %i \n", v[0]);
	printf("Valor no index 1 - %i \n", v[1]);
//	printf("Valor no index 3 - %i \n", v[3]);
	
	free(v); //Como aloquei a memoria, uso free quando quiser liberar aquele espaço.
	
	return 0;
}

//Malloc é responsável por reservar um espaço na memória de acordo com o que eu passar pra ela, e me traz o endereço
//desse espaço que foi alocado. Então, se ela me traz um endereço de memória, eu preciso passar esse endereço pra uma 
//variavel que receba que esse tipo de dado. Nesse caso, foi por isso que declarei a variavel ponteiro *V. Pois ela 
//recebe o endereço de memoria que minha funcao malloc está reservando.

//Malloc nos traz o ponteiro, porém, pra um tipo de dado na memória genérico, e não diretamente pra int, float, etc. 
//Assim, precisamos fazer um casting. (int*) antes da funcao, faz com que o ponteiro retornado seja pra um tipo int.  
