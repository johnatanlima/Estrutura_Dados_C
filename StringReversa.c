#include <stdio.h>
//Escrevendo uma dada string ao contr�rio. 

int main(){
	
	printf("Iterando string da ultima letra at� a primeira: \n\n");
	
	char nome[] = "Intermediario";
	int nomeLen = strlen(nome);
	int cont=0;
	
	for(cont = nomeLen-1; cont>=0; cont--){
		printf("%c - index[%i] \n", nome[cont], cont);
		
	}
	
	return 0;
}
