//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 2
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#include <stdio.h>
#include <stdlib.h>

// Baseado no algoritmo disponível em:
//	http://linguagemc.com.br/argumentos-em-linha-de-comando/

int main( int numeroArgumentos, char *argv[ ]){
	int contador;

	printf(" Numero de parametros: %d\n",numeroArgumentos -1);

	for(contador=0 ; contador < numeroArgumentos ; contador++){

			if(contador==0){
				printf(" Nome do executavel: %s\n",argv[contador]);
			}else{
        printf(" Parametro #%d: %s\n", contador,argv[contador]);
			}

	}

  return 0;
}
