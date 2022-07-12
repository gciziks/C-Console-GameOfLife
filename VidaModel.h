#ifndef VIDAMODEL_H_INCLUDED
#define VIDAMODEL_H_INCLUDED


#include <stdio.h>
#include <stdbool.h>

// Definição da Enumeração
//typedef enum{MORTO,VIVO}
//tipoEstado;

// Definição das Estruturas do Jogo (Individuo e mapa)
typedef struct Individuo {
int estado;
int vizinhos;
} tipoIndividuo;

typedef struct Mundo {
tipoIndividuo mapa[100][100];
} tipoMundo;



//Inicialização das Estruturas
tipoMundo mundo;


//Inicialização das Funções

void CriarPcs(tipoMundo mundo,int tam);
struct Mundo PrimeirosSeres(tipoMundo mundo, int tam);
int checkBox(tipoMundo mundo,int tam, int i,int j);
void Loop(tipoMundo mundo,int qtd_geracoes, int delay, int tam);
void showMapa(tipoMundo mundo,int tam);

#endif // VIDAMODEL_H_INCLUDED
