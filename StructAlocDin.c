#include <stdio.h>
#include <stdio.h>

/* CRIANDO UM EXEMPLO DE STRUCT DENTRO DE OUTRA STRUCT */
typedef struct animal{
	int idade;
	
}tipoAnimal;

typedef struct pessoa
{
	int idade;
	float peso;	
	tipoAnimal meuAnimal; 
}

tipoPessoa; //A estrutura é do tipo pessoa. Com typedef, eu ñ preciso declarar struct pessoa, apenas o tipoPessoa e a var.

int main(int argc, char *argv[]){
	
	tipoPessoa *p1;	//Por causa do typedef tipoPessoa. Não coloco struct pessoa *p1, para declarar. Apenas como está.

	p1 = (struct pessoa*)malloc(sizeof(struct pessoa));
	
	p1->idade = 12;
	p1->peso = 50.6;
	p1->meuAnimal.idade = 8;
	
	printf("Peso -> %.2f \n", p1->peso);
	printf("Idade do meu animal %i \n", p1->meuAnimal.idade);
	
	free(p1);
			
	return 0;
}
