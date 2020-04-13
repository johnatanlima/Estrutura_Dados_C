#include <stdio.h>

struct pessoa
{
	int idade;
	float peso;	
};

int main(int argc, char *argv[]){
	
	struct pessoa p1; //Ponteiro pra uma parta memoria que armazena uma struct
	struct pessoa *point;

	point = &p1; //ponteiro t� simplesmente recebendo e armazenando o endere�o de memoria de p
		
	(*point).idade = 26; //No espa�o de memoria idade, coloque o valor 26, do endere�o (p1) que est� em point. :)
	(*point).peso = 55.4;
	
	printf("idade -> %i \n", p1.idade); //Aqui, acesso o valor direto pela variavel p
	printf("Peso -> %f \n", point->peso); //Aqui acesso o valor que est� em P1, atrav�s do meu ponteio. o conteudo de peso. 
		
	return 0;
}
