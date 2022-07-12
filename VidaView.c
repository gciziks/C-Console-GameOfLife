#include <stdio.h>
#include <ctype.h>

#include "VidaModel.h"
#include "VidaView.h"
void exibirMenu() {
	 //seleção da opção do menu
	printf("\nPor favor, selecione uma das opcoes do menu:\n");
	printf("(1)-Iniciar\n");
	printf("(0)-Sair do Jogo\n");
	printf("\nOpcao: ");

}
int obterOpcao(){
	// Captura da opção selecionada pelo usuário
    int escolha;
    scanf("%d", &escolha);
    return escolha;

}
void exibirMensagem(char msg[]) {
	// Exibição de mensagem já predefinidas - facilitação dos prints
    printf("%s\n",msg);
}

void CriarNaTela(tipoMundo mundo, int tamanho){
    int i,j;
    printf("\n");
    for(i=0; i<tamanho;i++){
		printf(" %2d", i+1);
	}
	for(i=1; i<=tamanho;i++){
		printf("\n%2d",i);
		for(j=1; j<= tamanho; j++)
		{
			if(mundo.mapa[i][j].estado == 1){
				printf("*  ");
			}
			else printf("   ");
		}

	}

}


