//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 3
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#include <stdio.h>
#include <stdlib.h>
#include "saidaCrescente.h"

void imprimiResultadoCrescente(int vetor[],int tamanhoDoVetor){
    int i=0;

    printf("Saida Crescente:\n\t");

    for(i=0;i<tamanhoDoVetor;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

//Algoritmo bubble sort para ordenação crescente
//Disponível em:
//  http://codigofonte.uol.com.br/codigos/metodo-bolha-bubble-sort

void ordenaVetorCrescente(int vetor[],int tamanhoDoVetor){
  int aux, i, j;

	for(j=tamanhoDoVetor-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
      }
     }
   }

   imprimiResultadoCrescente(vetor,tamanhoDoVetor);
}
