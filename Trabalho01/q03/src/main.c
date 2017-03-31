//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 3
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "saidaCrescente.h"
#include "saidaDecrescente.h"

int decidiOrdenacao(char* argv[]){
    if(argv[1]==NULL){
      return 2;
    }else  if(strcmp(argv[1],"-d") == 0){
      return 2;
    }else if(strcmp(argv[1],"-r") == 0){
      return 3;
    }else{
      return 2;
    }
}

void escolheOperacao(int opcao,int quantidadeValores,int valoresDeEntrada[]){
        switch (opcao) {
          case 2:
          printf("=======================================================\n");
            ordenaVetorCrescente(valoresDeEntrada,quantidadeValores);
          printf("=======================================================\n");
            break;

          case 3:
          printf("=======================================================\n");
            ordenaVetorDecrescente(valoresDeEntrada,quantidadeValores);
          printf("=======================================================\n");
          break;

          default:
            printf("Nenhuma opcao!\n");
        }
}

int main( int argc, char *argv[]){
      int operacaoRealizar=0, valorAuxiliar=0,quantidadeValores=0;
      int *valoresDeEntrada = 0;

      operacaoRealizar = decidiOrdenacao(argv);

        while (valorAuxiliar != -1){
              scanf("%d",&valorAuxiliar);
              quantidadeValores++;
              if(valoresDeEntrada){
                  valoresDeEntrada=(int*)realloc(valoresDeEntrada,quantidadeValores*sizeof(int*));
              }else{
                  valoresDeEntrada = (int*)malloc(1);
              }
              valoresDeEntrada[quantidadeValores-1] = valorAuxiliar;
        };

      escolheOperacao(operacaoRealizar,quantidadeValores-1,valoresDeEntrada);

      free(valoresDeEntrada);

    return 0;
  }
