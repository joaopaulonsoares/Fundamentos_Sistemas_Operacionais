//Trabalho 1 - Fundamentos de Sistemas Operacionais
//Exercício 1
//Arquivo tiposCompostos.h
//Aluno: João Paulo Nunes Soares
//Matrícula: 15/0038267

#ifndef TIPOSCOMPOSTOS_H
#define TIPOSCOMPOSTOS_H

typedef struct Point{
        double x;
        double y;
}Point;

typedef struct Quadrilateral{
        struct Point coord;
}Quadrilateral;

#endif
