#ifndef VIDAVIEW_H_INCLUDED
#define VIDAVIEW_H_INCLUDED

#include "VidaModel.h"

//Mensagens pré-definidas
#define MSG_BV "\n-----BEM VINDO AO JOGO DA VIDA!!-----\n\n"
#define MSG_SELEC_MUNDO "\n-----Selecione o tamanho do mundo que deseja (De 1 a 100)-----\nTamanho: "
#define MSG_CRIADAS "\n\nMUNDO CRIADO!\nEscolha os seres vivos da primeira geração (0 0 quando finalizar)"
#define MSG_GERACOES "\n\nSERES CRIADOS!\nEscolha a quantidade de geracoes:"
#define MSG_DELAY "\n\nInsira o intervalo de tempo entre cada geracao (0 a 10 segundos):"



//Funções
void exibirMenu();
int obterOpcao();
void exibirMensagem(char msg[]);
void CriarNaTela(tipoMundo mundo, int tamanho);


#endif // VIDAVIEW_H_INCLUDED
