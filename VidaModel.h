#ifndef VIDAMODEL_H_INCLUDED
#define VIDAMODEL_H_INCLUDED


#include <stdio.h>
#include <stdbool.h>

// Defini��o da Enumera��o
//typedef enum{MORTO,VIVO}
//tipoEstado;

// Defini��o das Estruturas do Jogo (Individuo e mapa)
typedef struct Individuo {
int estado;
int vizinhos;
} tipoIndividuo;

typedef struct Mundo {
tipoIndividuo mapa[100][100];
} tipoMundo;



//Inicializa��o das Estruturas
tipoMundo mundo;


//Inicializa��o das Fun��es

void CriarPcs(tipoMundo mundo,int tam);
struct Mundo PrimeirosSeres(tipoMundo mundo, int tam);
int checkBox(tipoMundo mundo,int tam, int i,int j);
void Loop(tipoMundo mundo,int qtd_geracoes, int delay, int tam);
void showMapa(tipoMundo mundo,int tam);

#endif // VIDAMODEL_H_INCLUDED
