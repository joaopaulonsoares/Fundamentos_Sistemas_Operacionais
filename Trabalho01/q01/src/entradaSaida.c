//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 1
//Arquivo entradaSaida.c
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

 #include <stdio.h>
 #include <stdlib.h>

 #include "tiposCompostos.h"
 #include "operacoesGeometricas.h"

  void printResultConvex(double area){
    printf("Quadrilatero Convexo!\n");
    printf("Area: %.0lf\n",area);
  }

  void printResultNotConvex(){
    printf("Quadrilatero nao convexo!\n");
  }

  void doCalculus(struct Quadrilateral quadrilateral[]){
       int result;
       double area;

       result = convexHull(quadrilateral,4);

       if(result==2){
          area = PolygonArea(quadrilateral,4);
          printResultConvex(area);
       }else{
          printResultNotConvex();
       }
  }

  void receivesValues(){
    struct Quadrilateral quadrilateral[4];

    for(int i=0;i<4;i++){
        printf("Insira as coordenadas do Ponto %d: ",i );
          scanf("%lf %lf",&quadrilateral[i].coord.x,&quadrilateral[i].coord.y);
    }
      doCalculus(quadrilateral);
  }
