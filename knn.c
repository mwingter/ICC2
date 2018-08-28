#include <stdio.h>

int main(int argc, char const *argv[])
{
	char trainFileName; //nome do arquivo de treino
	char testFileName; //nome do arquivo de teste
	int k; //numero de vizinhos k

	scanf("%d %d %d", trainFileName, testFileName, k); //recebe 3 entradas via teclado: o nome do arquivo de treino, 
																					  //o nome do arquivo de teste e o 
																					  //numero de vizinhos k


	//O numero de vizinhos k deve estar entre 1 e o numero maximo de exemplos no conjunto de treinamento
	if (k < 1 | k > ???){
		printf("k is invalid\n");
	}


	return 0;
}