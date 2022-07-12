#include <stdio.h>
#include <ctype.h>

#include "VidaModel.h"
#include "VidaView.h"
void exibirMenu() {
	 //sele��o da op��o do menu
	printf("\nPor favor, selecione uma das opcoes do menu:\n");
	printf("(1)-Iniciar\n");
	printf("(0)-Sair do Jogo\n");
	printf("\nOpcao: ");

}
int obterOpcao(){
	// Captura da op��o selecionada pelo usu�rio
    int escolha;
    scanf("%d", &escolha);
    return escolha;

}
void exibirMensagem(char msg[]) {
	// Exibi��o de mensagem j� predefinidas - facilita��o dos prints
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


