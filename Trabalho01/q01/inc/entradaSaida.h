//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 1
//Arquivo entradaSaida.h
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267
 #include "tiposCompostos.h"

#ifndef OPERACOESGEOMETRICAS_H
#define OPERACOESGEOMETRICAS_H

//Imprime que o poligono é convexo e sua respectiva área
void printResultConvex(double area);

//Imprime que o poligono não é convexo
void printResultNotConvex();

//Verifica se o poligono é convexo
void doCalculus(struct Quadrilateral quadrilateral);

//Recebe as coordenadas para a análise
void receivesValues();


#endif
