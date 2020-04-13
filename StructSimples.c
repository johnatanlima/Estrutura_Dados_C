#include <stdio.h>

struct pessoa
{
	int idade;
	float peso;	
};

int main(int argc, char *argv[]){
	
	struct pessoa p1;
	struct pessoa p2;
	
	p1.idade = 26;
	p1.peso = 55.4;
	
	printf("Idade -> %i | Peso -> %.2f \n", p1.idade, p1.peso);
	printf("-------------------------- \n");
	
	printf("Digite sua idade: ");
	scanf("%i", &p2.idade);
	printf("Digite se peso: ");
	scanf("%f", &p2.peso);
	
	printf("Idade -> %i | Peso -> %.2f", p2.idade, p2.peso);

	return 0;
}
