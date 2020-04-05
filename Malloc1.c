#include <stdio.h>
#include <stdlib.h>

#define max 10

int main(){

	int *v;
	
	v = (int*)malloc(max * sizeof(int));
	
	if(v == NULL ){
		printf("Malloc n�o conseguiu reservar um espa�o na mem�ria. \n\n");	
		exit(1);
	}
	
	v[0] = 10;
	v[1] = 20;
	
	printf("Valor no index 0 - %i \n", v[0]);
	printf("Valor no index 1 - %i \n", v[1]);
//	printf("Valor no index 3 - %i \n", v[3]);
	
	free(v); //Como aloquei a memoria, uso free quando quiser liberar aquele espa�o.
	
	return 0;
}

//Malloc � respons�vel por reservar um espa�o na mem�ria de acordo com o que eu passar pra ela, e me traz o endere�o
//desse espa�o que foi alocado. Ent�o, se ela me traz um endere�o de mem�ria, eu preciso passar esse endere�o pra uma 
//variavel que receba que esse tipo de dado. Nesse caso, foi por isso que declarei a variavel ponteiro *V. Pois ela 
//recebe o endere�o de memoria que minha funcao malloc est� reservando.

//Malloc nos traz o ponteiro, por�m, pra um tipo de dado na mem�ria gen�rico, e n�o diretamente pra int, float, etc. 
//Assim, precisamos fazer um casting. (int*) antes da funcao, faz com que o ponteiro retornado seja pra um tipo int.  
