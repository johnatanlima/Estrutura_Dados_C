#include <stdio.h>

void funcao(int *param){ //O endereco que tá vindo é o de valor. 
	*param = 30; //No endereco de memoria valor, colocar o conteudo 30.
}


int main(){
	//int var = 10;
	//int *point; //tipo de variavel que armazena um endereco de memoria
	int valor = 20;
	
	funcao(&valor); //chamo a funcao passando pra ela o endereco de memoria da var 'valor'. 
	
	printf("Verificar se o valor de param será alterado - %i", valor); //funcao recebeu um end de memoria, e nele colocou 30;
	
	//point = &var; //Se o & captura um end de mem, então posso atribuir ele a var point.
	//*point = 20; //Oras, então posso colocar um novo valor nesse endereco de memoria
	
	//printf("A variavel var tem o valor %i \n\n", var);
	//printf("No endereco de memoria *point tem-se o conteudo %i \n\n", *point);
	
	return 0;
}
