#include <stdio.h>

struct pessoa
{
	int idade;
	float peso;	
};

int main(int argc, char *argv[]){
	
	struct pessoa p1; //Ponteiro pra uma parta memoria que armazena uma struct
	struct pessoa *point;

	point = &p1; //ponteiro tá simplesmente recebendo e armazenando o endereço de memoria de p
		
	(*point).idade = 26; //No espaço de memoria idade, coloque o valor 26, do endereço (p1) que está em point. :)
	(*point).peso = 55.4;
	
	printf("idade -> %i \n", p1.idade); //Aqui, acesso o valor direto pela variavel p
	printf("Peso -> %f \n", point->peso); //Aqui acesso o valor que está em P1, através do meu ponteio. o conteudo de peso. 
		
	return 0;
}
