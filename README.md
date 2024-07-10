# Jogo da cobrinha
UNIVERSIDADE FEDERAL DE MINAS GERAIS

Escola de Engenharia Departamento de Engenharia Elétrica





-Gabriel Paiva Couto 

-Heitor Sousa Moraes

-Liz Pinheiro Lima Nogueira

-Oliver Haas Böttcher

-Thais Cristina Souza Fernandes



Trabalho de Programação e Desenvolvimento de Software II



## INDICE 
1. CARTÕES CRC
2. USER STORIES
3. PROJETO NO GIT
4. DOCUMENTAÇÃO

## CARTÕES CRC

### SNAKE

 Responsabilidades:
 
-Movimentação da snake;

 •  Velocidade
 
-Coordenadas (localização);

-Detectar quando come comida;

-Morte da snake;

  • Próprio corpo
 
  • Parede

 Colaborações:
 
 -Comida;
 
 •  Quando detectar que comeu comida, aumentar o tamanho da cobra
	 
  -Menu;
 
  • Ajustar a velocidade da cobra de acordo com o modo de jogo

### COMIDA

Responsabilidades:

-Tempo definido na tela aparecer aleatoriamente

•Coordenadas da comida para verificação da cobra

Colaborações:

-Menu;

• Ajustar o intervalo de tempo que a comida irá aparecer de acordo com o modo de jogo escolhido

### MENU

Responsabilidades:

-Iniciar o jogo

-Receber do jogador o modo de jogo

•Carreira (fácil, médio difícil)

•Infinito

Colaborações:

-Comida

•Informa o modo de jogo escolhido para o tempo necessário de cada aparição Snake

•Informa o modo de jogo escolhido para velocidade ser alterada




## USER STORIES

As funcionalidades do sistema do ponto de vista do usuário estão detalhadas a seguir:

### FUNCIONALIDADES DO JOGO

1.1.INICIAR UM NOVO JOGO

•Descrição: Como um jogador, quero ser capaz de iniciar um novo jogo, para começar a jogar o Snake Game.

•Critérios de Aceitação:

°Posso iniciar um novo jogo a partir do menu principal.

°O jogo começa com a cobra em uma posição inicial padrão.

°A pontuação é “resetada” ao iniciar um novo jogo.

1.2.VER PONTUAÇÃO DURANTE O JOGO

•Descrição: Como um jogador, quero ser capaz de ver minha pontuação durante o jogo, para acompanhar meu desempenho.

•Critérios de Aceitação:

°Posso ver a pontuação atual em uma área visível da tela durante o jogo.

°Posso ver a pontuação mais alta alcançada em jogos anteriores.

1.3.ALTERNAR MODOS DE JOGO

•Descrição: Como um jogador, quero ser capaz de alternar os modos de jogo, para ter mais variabilidade, permitindo que o jogo seja aproveitado de maneiras diferentes.

•Critérios de Aceitação:

°Posso escolher entre diferentes modos de jogo no menu principal.

°Cada modo possui regras e objetivos distintos.

1.4.ESCOLHER NÍVEL DE DIFICULDADE

•Descrição: Como um jogador, quero ser capaz de escolher diferentes níveis de dificuldade, para ajustar o desafio do jogo conforme meu nível de habilidade.

•Critérios de Aceitação:


°Posso escolher entre pelo menos três níveis de dificuldade: fácil, médio e difícil.

°A velocidade da cobra e a frequência de surgimento de alimentos variam de acordo com a dificuldade selecionada.

1.5.AUMENTO GRADUAL DE DIFICULDADE

•Descrição: Como um jogador, quero perceber que a dificuldade do jogo aumenta gradativamente com o tempo, tornando recordes maiores mais recompensadores.

•Critérios de Aceitação:

°A velocidade da cobra aumenta após atingir determinadas pontuações.

°A velocidade com que os alimentos desaparecem aumenta após atingir determinadas pontuações.

1.6.SURGIMENTO DE ALIMENTOS

•Descrição: Como um jogador, eu quero que surjam alimentos aleatoriamente na tela para que eu possa aumentar minha pontuação e o tamanho da cobra ao coletá-los.

•Critérios de Aceitação:

°Alimentos surgem em posições aleatórias na tela a intervalos regulares.

°A cobra aumenta de tamanho ao coletar alimentos.

°A pontuação do jogador aumenta ao coletar alimentos.

### CONTROLES E INTERAÇÃO

2.1 CONTROLAR A DIREÇÃO DA COBRA

•Descrição: Como um jogador, quero ser capaz de controlar a direção da cobra usando as teclas de seta, para poder jogar facilmente.

•Critérios de Aceitação:

°Posso mover a cobra para cima, para baixo, para a esquerda e para a direita usando as teclas de seta.


°A cobra não pode se mover na direção oposta à que está se movendo atualmente (evitando movimentos reversos instantâneos).

2.2.TECLAS ESPECÍFICAS PARA SAIR DO JOGO

•Descrição: Como um jogador, quero ser capaz de usar teclas específicas para sair do jogo, para uma melhor experiência de usuário.

•Critérios de Aceitação:

°Posso pressionar uma tecla específica (por exemplo, 'Esc') para sair do jogo.

°Um prompt de confirmação aparece antes de sair do jogo para evitar saídas acidentais.

2.3.NOTIFICAÇÃO DE COLISÃO

•Descrição: Como um jogador, quero ser notificado quando a cobra colidir, para saber quando o jogo termina.

•Critérios de Aceitação:

°O jogo termina quando a cobra colidir consigo mesma.

°O jogo termina quando a cobra colidir com os limites da tela.

°Uma mensagem de "Game Over" aparece na tela após uma colisão.

### EXPERIENCIA DO USUÁRIO

3.1.INTERFACE DE USUÁRIO CLARA E INTUITIVA

•Descrição: Como um jogador, quero ter uma interface de usuário clara e intuitiva, para navegar facilmente pelo menu e funcionalidades do jogo.

•Critérios de Aceitação:

°O menu principal é fácil de navegar com opções claras como "Iniciar Jogo" e "Modo de jogo".


## PROJETO NO GITHUB

O projeto pode ser clonado a partir do seguinte link:

https://github.com/lizzpn/Snakegame.git

A página principal pode ser acessada pelo link a seguir:

https://github.com/lizzpn/Snakegame


## DOCUMENTAÇÃO

•História e Desenvolvimento

O “Snake Game” é um dos jogos eletrônicos mais tradicionais desde a década de 90, sendo icônico até os dias atuais. Originalmente lançado para fliperamas, o jogo era monocromático e o personagem era movido pelas setas do teclado de maneira simples e interativa.
	Após anos de popularidade nos fliperamas, o jogo ganhou sua versão mobile, com o lançamento do Nokia 6110, que o trouxe para um público ainda maior. Com a evolução dos smartphones, o jogo nunca caiu no esquecimento, ganhando novas versões para aparelhos atuais com melhorias gráficas e funcionalidades adicionais. Essas atualizações mantêm o interesse pelo jogo vivo, atraindo tanto novos jogadores quanto aqueles que desejam reviver a nostalgia dos tempos passados.
	No jogo, o usuário controla uma “cobrinha” em um ambiente delimitado. O objetivo do jogador é comer as “frutinhas” que aparecem aleatoriamente no ambiente, ganhando pontos, fazendo a cobrinha aumentar de tamanho e, consequentemente, elevando a dificuldade de forma gradativa. Quanto mais pontos o jogador fizer antes de perder, maior será seu recorde. A diversão está em tentar fazer o maior número de pontos possível a cada vez que se joga. O Snake Game não é apenas um jogo, mas um pedaço da história dos jogos eletrônicos que continua a evoluir e a encantar gerações.

•Visão Geral do Projeto

O sistema do Snake Game oferece uma variedade de funcionalidades voltadas para uma experiência de jogo envolvente e personalizada. Os jogadores podem iniciar um novo jogo a partir do menu principal, com a cobra posicionada em uma posição inicial padrão e a pontuação “resetada”. 
	Durante o jogo, é possível visualizar a pontuação atual e os recordes anteriores. O jogo permite alternar entre diferentes modos de jogo, cada um com suas próprias regras e objetivos, e escolher entre três níveis de dificuldade (fácil, médio e difícil), que influenciam a velocidade da cobra e a frequência de surgimento dos alimentos. A dificuldade aumenta gradativamente com a pontuação. 
	Os controles são simples, utilizando as teclas de seta para movimentar a cobra, e uma tecla específica para sair do jogo, com um prompt de confirmação para evitar saídas acidentais. A interface é clara e intuitiva, com um menu principal de fácil navegação, e o jogo notifica o jogador com uma mensagem de "Game Over" quando ocorre uma colisão.


[Trabalho PDS 2.docx](https://github.com/user-attachments/files/16151274/Trabalho.PDS.2.docx)
