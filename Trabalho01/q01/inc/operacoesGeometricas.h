//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 1
//Arquivo operacoesGeometricas.h
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267
 #include "tiposCompostos.h"

#ifndef OPERACOESGEOMETRICAS_H
#define OPERACOESGEOMETRICAS_H

// Calcula a area do poligono convexo
double PolygonArea(Quadrilateral *polygon,int N);

// Para achar a orientação dos pontos
// A função vai retornar os seguintes valores:
// 0 --> p, q e r são colineares
// 1 --> Sentido horário
// 2 --> Sentido anti horário
int orientation(Point p,Point q,Point r);

// Calcula o convex hull dos pontos
// O retorno será:
//      1 -> Poligono não convexo
//      2 -> Poligono convexo
int convexHull(Quadrilateral points [],int n);


#endif
