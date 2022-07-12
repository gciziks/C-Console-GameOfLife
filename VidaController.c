#include "VidaController.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
void executarController(){
    int escolha;
	do {
	    // Setar Menu
	    exibirMensagem(MSG_BV);
		exibirMenu();

		escolha = obterOpcao();
		bool criou;
		switch (escolha){
			case 1: Criacao(criou);
					break;
            case 2:
                    break;
            case 0: break;
		}

	}while(escolha != 0);
}
