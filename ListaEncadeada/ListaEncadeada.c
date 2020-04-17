#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no *prox;
} bloco;

bloco* criarLista(){
	return NULL;
}

//
bloco* inserir(bloco* novoBloco, int i){
	bloco* novoNo = (bloco*)malloc(sizeof(bloco));
	
	novoNo->info = i;
	novoNo->prox = novoBloco;
	
	return novoNo; 	
}

int main(){
	
	bloco *lista;
	
	lista = criarLista();
	lista = inserir(lista, 10);
	lista = inserir(lista, 20);
	
	
	
	return 0;
}
