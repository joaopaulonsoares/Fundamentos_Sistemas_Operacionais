//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 3
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#include <stdio.h>
#include <stdlib.h>
#include "saidaDecrescente.h"

void imprimiResultadoDecrescente(int vetor[],int tamanhoDoVetor){
    int i=0;

    printf("Saida Decrescente:\n\t");

    for(i=0;i<tamanhoDoVetor;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

//Algoritmo bubble sort para ordenação decrescente
//Disponível em:
//  http://codigofonte.uol.com.br/codigos/metodo-bolha-bubble-sort

void ordenaVetorDecrescente(int vetor[],int tamanhoDoVetor){
  int x=0,y=0;
  int aux=0;

  for( x = 0; x < tamanhoDoVetor; x++ ){
      for( y = x + 1; y < tamanhoDoVetor; y++ ){
          if ( vetor[y] > vetor[x] ){
              aux = vetor[y];
              vetor[y] = vetor[x];
              vetor[x] = aux;
          }
      }
   }

   imprimiResultadoDecrescente(vetor,tamanhoDoVetor);
}
