//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 1
//Arquivo operacoesGeometricas.c
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#include <stdio.h>
#include <stdlib.h>

#include "operacoesGeometricas.h"
#include "tiposCompostos.h"

/*Algoritmo retirado de: http://paulbourke.net/geometry/polygonmesh/source1.c
  Adaptações foram feitas
*/
double PolygonArea(Quadrilateral *polygon,int N){
   int i,j;
   double area = 0;

   for (i=0;i<N;i++) {
      j = (i + 1) % N;
      area += polygon[i].coord.x * polygon[j].coord.y;
      area -= polygon[i].coord.y * polygon[j].coord.x;
   }

   area /= 2;
   return(area < 0 ? -area : area);
}


/* Algoritmo retirado de: http://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
   Com adaptações
*/
int orientation(Point p, Point q, Point r){
    double val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0){
      return 0; // colinear
    }else if (val > 0) {
      return 1;
    }else{
      return 2;
    }
}

/* Baseado em : http://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
   Com adaptações
*/
int convexHull(Quadrilateral points[], int n){

    if (n < 3){
        return 1;//Nao tem como calcular, pontos insuficientes
    }

    double next[n];
    for (int i = 0; i < n; i++){
        next[i] = -1;
    }

    int l = 0, cont=0;
    for (int i = 1; i < n; i++){
        if (points[i].coord.x < points[l].coord.x)
            l = i;
    }

    int p = l, q;
    do{
        q = (p + 1) % n;
        for (int i = 0; i < n; i++)
            if (orientation(points[p].coord, points[i].coord, points[q].coord) == 2)
                q = i;

        next[p] = q; 
        p = q; 
    } while (p != l);

    for (int i = 0; i < n; i++){
        if (next[i] != -1){
            cont++;
        }
    }

    if(cont<4){
      return 1;
    }else{
      return 2;
    }

}
