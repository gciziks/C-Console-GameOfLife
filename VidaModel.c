#include "VidaModel.h"
#include "VidaView.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>


void CriarPcs(tipoMundo mundo,int tam){
    mundo.mapa[0][0].estado = 0;
    int i, j;
	for(i=0; i<tam;i++){
		printf("  %2d", i+1);
	}
	for(i=1; i<=tam;i++){
		for(j=1; j<= tam; j++)
		{
			mundo.mapa[i][j].estado = 0;

		}
		printf("\n%2d",i);
	}
}
struct Mundo PrimeirosSeres(tipoMundo mundo, int tam){
    int i,j;
    do{
        printf("\n\nLinha: ");
        scanf("%d", &i);
        printf("Coluna: ");
        scanf("%d", &j);

        mundo.mapa[i][j].estado = 1;
        CriarNaTela(mundo,tam);
	}while(i!=0 && j!=0);
	return mundo;

}
int checkBox(tipoMundo mundo,int tam, int i,int j){
    int count = 0;
    if(mundo.mapa[i-1][j-1].estado == 1){
        //-1 / -1
        if( ((i-1)<= 0 )|| ((i-1) > tam)){
               printf(" ");
           }
        else{
           count++;
        }

    }
    if(mundo.mapa[i-1][j].estado == 1){
        //0 / -1
        if( ((i-1)<= 0 )|| ((i-1) > tam)){
                printf(" ");
           }
        else{
           count++;
        }
    }
    if(mundo.mapa[i-1][j+1].estado == 1){
        //1 / -1

        if( ((i-1)<= 0 )|| ((i-1) > tam)){
                printf(" ");
           }
        else{
           count++;
        }
    }
    if(mundo.mapa[i][j+1].estado == 1){
        //0 / 1
        if( ((j+1)<= 0 )|| ((j+1) > tam)){
                printf(" ");
           }

        else{
           count++;
        }
    }
    if(mundo.mapa[i+1][j+1].estado == 1){
        //1 / 1
        if( ((j+1)<= 0 )|| ((j+1) > tam)){
                printf(" ");
           }
        else{
           count++;
        }
    }
    if(mundo.mapa[i+1][j].estado == 1){
        //1 / 0
        if( ((i+1)<= 0 )|| ((i+1) > tam)){
                printf(" ");

           }
        else{
           count++;
        }
    }
    if(mundo.mapa[i+1][j-1].estado == 1){
        //1 / -1
        if( ((j-1)<= 0 )|| ((j-1) > tam)){
                printf(" ");
           }
        else{
           count++;
        }
    }
    if(mundo.mapa[i][j-1].estado == 1){
        //0 / -1
        if( ((j-1)<= 0) || ((j-1) > tam)){
            printf(" ");
           }
        else{
           count++;
        }
    }
    return count;

}

void Loop(tipoMundo mundo,int qtd_geracoes, int delay, int tam){
    int x,i,j;
    int nmr_around;
    tipoMundo copymundo;
    copymundo = mundo;
    delay = delay*1000;

    for(x=0;x<qtd_geracoes;x++){
    	printf("\n\n-------------------------------------GERACAO %d-------------------------------------------------\n", x+1);
        CriarNaTela(mundo,tam);

        for(i=1;i<=tam;i++){
            for(j=1;j<=tam;j++){
                nmr_around = checkBox(copymundo,tam,i,j);

                if(copymundo.mapa[i][j].estado == 1){
                    switch (nmr_around){
                        case 0:
                        case 1: mundo.mapa[i][j].estado = 0;
                                break;
                        case 2:
                        case 3: mundo.mapa[i][j].estado = 1;
                                break;
                        default:mundo.mapa[i][j].estado = 0;
                                break;

                    }
                }
                else{
                    if(nmr_around == 3){
                        mundo.mapa[i][j].estado = 1;

                    }
                }
            }
        }
        
        
        copymundo = mundo;
		Sleep(delay);
    }
}
void Criacao(bool criou){
    int tam;
    int ready;
    int nmr_ger;
    int nmr_delay;
    //Criar peças - Opção 01
    exibirMensagem(MSG_SELEC_MUNDO);
    tam = obterOpcao();
    CriarPcs(mundo,tam);
    //showMapa(mundo,tam);
    criou = true;
    exibirMensagem(MSG_CRIADAS);
    mundo = PrimeirosSeres(mundo,tam);
    CriarNaTela(mundo,tam);
    exibirMensagem(MSG_GERACOES);
    nmr_ger = obterOpcao();
    exibirMensagem(MSG_DELAY);
    nmr_delay = obterOpcao();
    Loop(mundo,nmr_ger,nmr_delay,tam);
}

void showMapa(tipoMundo mundo,int tam){
    int i,j;
    for(i=1; i<=tam;i++){
		for(j=1; j<= i;j++){
            printf("\n\n\n [%d][%d]: %d",i,j,mundo.mapa[i][j].estado);
		}
    }

}
