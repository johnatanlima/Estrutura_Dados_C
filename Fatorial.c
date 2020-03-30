#include <stdio.h>

//Criando código para demonstrar o fatorial.

int fat(int num){
	if (num == 0 || num ==1)
	
	return 1;
	
	return num * fat(num-1);
}
int main(){

	int i = 5;
	
	printf("O fatorial de !%i resulta em -> %i \n\n", i, fat(i));	
	
	return 0;
}
