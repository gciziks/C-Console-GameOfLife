Jogo da vida em #C
===================

Jogo da vida criado em linguagem #C pelo grupo ProjetoD

ÍNDICE
-------------
<!--ts-->
   * [Sobre o ProjetoD](#sobre-o-projetoD)
   * [Descrição do Jogo](#descrição-do-jogo)
   * [Regras do Jogo](#regras-do-jogo)
   * [Estrutura de Dados](#estrutura-de-dados)
   * [Organização dos módulos do programa](#organização-dos-módulos-do-programa)
<!--te-->

Sobre o ProjetoD
----------------

O ProjetoD é um grupo criado para a matéria de Laboratório de Programação do curso de ciência da computação da Pontifícia Universidade Católica de São Paulo. O intuito desta matéria é aplicar os conhecimentos obtidos no decorrer do curso para realização de projetos, bem como a documentação e apresentação dos mesmos.
O Projeto D é composto pelos seguintes integrantes:

    * Gabriel Antony Cadima Ciziks
    * Lucas Guitti Bonando
    * Tiago Rausch de Oliveira

Descrição do Jogo
----------------
Em 1970, o cientista John Conway inventou um jogo que simula o processo de nascimento, sobrevivência e morte. O jogo da vida é um autômato celular e foi criado de modo 
a reproduzir, através de regras simples, as alterações e mudanças em grupos de seres vivos. A ideia base é que um ser vivo necessita de outros seres vivos para sobreviver 
e procriar, mas um excesso de densidade populacional provoca a morte do ser vivo devido à escassez de comida. 
Os indivíduos vivem num mundo matricial e a geração seguinte é gerada a partir da geração 
anterior de acordo com regras predefinidas.

Regras do Jogo
--------------

  • Reprodução: Um ser vivo nasce numa célula vazia se essa célula vazia tiver exatamente 3 seres vivos vizinhos. 
  
  • Sobrevivência: Um ser vivo que tenha 2 ou 3 vizinhos sobrevive para a geração seguinte. 
  
  • Morte por falta de comida: Um ser vivo com 4 ou mais vizinhos morre porque fica sem comida. 
  
  • Morte por solidão: Um ser vivo com 0 ou 1 vizinhos morre de solidão.
  
A cada geração, as regras devem ser aplicadas para todos os seres vivos ao mesmo tempo,
isto é, no mesmo passo para obter o próximo passo ou geração. 

Estrutura de Dados
------------------
A estrutura das peças se dá pela seguinte forma:
```c

// Definição das Estruturas do Jogo (Individuo e mapa)
typedef struct Individuo {
int estado;
int vizinhos;
} tipoIndividuo;

typedef struct Mundo {
tipoIndividuo mapa[100][100];
} tipoMundo;
```

E é inicializada da seguinte forma:
```c
tipoMundo mundo;
```

Organização dos módulos do programa
-----------------------------------
O sistema precisava ter diferentes formas de apresentação do jogo (múltiplas interfaces). Para isso, o padrão MVC foi escolhido. O princípio básico do MVC é a divisão da 
aplicação em três camadas: a camada de interação do usuário (view), a camada de manipulação dos dados (model) e a camada de controle (controller). Assim, como as próprias 
camadas indicam, utilizamos a View para todo o código em que haveria alguma interação de tela do usuário, de mostrar o menu até todas as peças em jogo, a Model, para 
todo o tipo de processamento de dados e afins do jogo, já para o Controller, assim como o nome diz, usamos para controlar toda a estrutura do jogo, também fazendo o link 
entre a View e a Model.
