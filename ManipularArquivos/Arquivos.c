#include <stdio.h>

//Exemplo simples para manipula��o de arquivos txt

int main(){
	
	FILE *file; //Declara��o de um ponteiro para armazar o endere�o de memoria de um tipo arquivo.
	int cont = 0;
	file = fopen("meuTxt.txt", "a+"); //Funcao fopen atribuir� se conseguiu abrir o arquivo ou nao.. 'a+' para acrescentar dados ao file ja existente..  
		if (file == NULL) //Se o arquivo txt existir ok, senao informo que nao foi possivel
			printf("Erro ao tentar abrir arquivo.. \n\n");
		else 
			printf("Deu certo... \n\n");
	
	fputs(" \n Acrescentando dados no txt.. \n", file); //A string ser� escrita no arquivo txt, que foi carregado no file.
	for(cont = 0; cont<=10; cont++){ //Fazendo loop de 10 numeros.. 
		fprintf(file, "Numero -> %d adicionado \n", cont); //No arquivo carregado em file, acrescento o conteudo da string, e cont var de valor
		printf("Numero %i Ok \n", cont); //Apenas uma confirma��o... por�m, saida � no monitor... 
	}
	
	fclose(file); //Salva, fecha e descarrega o arquivo da memoria.. 
//	char texto[] = *file;
//	
//	printf("Texto do arquivo %s ", texto[]);
	
	system("pause");
}
