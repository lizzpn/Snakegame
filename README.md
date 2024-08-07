# Jogo da cobrinha
Trabalho de Programação e Desenvolvimento de Software II

## Alunos integrantes

* Gabriel Paiva Couto 
* Heitor Sousa Moraes
* Liz Pinheiro Lima Nogueira
* Oliver Haas Böttcher
* Thais Cristina Souza Fernandes

## ÍNDICE
1. [USER STORIES](#user-stories)
2. [INSTALAÇÃO](#instalação)
3. [DOCUMENTAÇÃO](#documentação)

## USER STORIES
As funcionalidades do sistema do ponto de vista do usuário estão detalhadas a seguir:

### FUNCIONALIDADES DO JOGO

**1. INICIAR UM NOVO JOGO**
   * **Descrição:** Como um jogador, quero ser capaz de iniciar um novo jogo, para começar a jogar o Snake Game.
     
   * **Critérios de Aceitação:**
     
     * Posso iniciar um novo jogo a partir do menu principal.
       
     * O jogo começa com a cobra em uma posição inicial padrão.
       
     * A pontuação é “resetada” ao iniciar um novo jogo.

**2. VER PONTUAÇÃO DURANTE O JOGO**
   * **Descrição:** Como um jogador, quero ser capaz de ver minha pontuação durante o jogo, para acompanhar meu desempenho.
   
   * **Critérios de Aceitação:**
   
     * Posso ver a pontuação atual em uma área visível da tela durante o jogo.
     
     * Posso ver a pontuação mais alta alcançada em jogos anteriores.

**3. ALTERNAR MODOS DE JOGO**
   * **Descrição:** Como um jogador, quero ser capaz de alternar os modos de jogo, para ter mais variabilidade, permitindo que o jogo seja aproveitado de maneiras diferentes.
     
   * **Critérios de Aceitação:**
     
     * Posso escolher entre diferentes modos de jogo no menu principal.
       
     * Cada modo possui regras e objetivos distintos.

**4. ESCOLHER NÍVEL DE DIFICULDADE**
   * **Descrição:** Como um jogador, quero ser capaz de escolher diferentes níveis de dificuldade, para ajustar o desafio do jogo conforme meu nível de habilidade.
  
   * **Critérios de Aceitação:**

     * Posso escolher entre pelo menos três níveis de dificuldade: fácil, médio e difícil.
    
     * A velocidade da cobra e a frequência de surgimento de alimentos variam de acordo com a dificuldade selecionada.

**5. AUMENTO GRADUAL DE DIFICULDADE**
   * **Descrição:** Como um jogador, quero perceber que a dificuldade do jogo aumenta gradativamente com o tempo, tornando recordes maiores mais recompensadores.
  
   * **Critérios de Aceitação:**

     * A velocidade da cobra aumenta após atingir determinadas pontuações.
    
     * A velocidade com que os alimentos desaparecem aumenta após atingir determinadas pontuações.

**6. SURGIMENTO DE ALIMENTOS**
   * **Descrição:** Como um jogador, eu quero que surjam alimentos aleatoriamente na tela para que eu possa aumentar minha pontuação e o tamanho da cobra ao coletá-los.
  
   * **Critérios de Aceitação:**

     * Alimentos surgem em posições aleatórias na tela a intervalos regulares.
    
     * A cobra aumenta de tamanho ao coletar alimentos.
    
     * A pontuação do jogador aumenta ao coletar alimentos.

### CONTROLES E INTERAÇÃO

**1. CONTROLAR A DIREÇÃO DA COBRA**
   * **Descrição:** Como um jogador, quero ser capaz de controlar a direção da cobra usando as teclas de seta, para poder jogar facilmente.
  
   * **Critérios de Aceitação:**

     * Posso mover a cobra para cima, para baixo, para a esquerda e para a direita usando as teclas de seta.
    
     * A cobra não pode se mover na direção oposta à que está se movendo atualmente (evitando movimentos reversos instantâneos).

**2. TECLAS ESPECÍFICAS PARA SAIR DO JOGO**
   * **Descrição:** Como um jogador, quero ser capaz de usar teclas específicas para sair do jogo, para uma melhor experiência de usuário.
  
   * **Critérios de Aceitação:**

     * Posso pressionar uma tecla específica (por exemplo, 'Esc') para sair do jogo.
    
     * Um prompt de confirmação aparece antes de sair do jogo para evitar saídas acidentais.

**3. NOTIFICAÇÃO DE COLISÃO**
   * **Descrição:** Como um jogador, quero ser notificado quando a cobra colidir, para saber quando o jogo termina.
  
   * **Critérios de Aceitação:**

     * O jogo termina quando a cobra colidir consigo mesma.
    
     * O jogo termina quando a cobra colidir com os limites da tela.
    
     * Uma mensagem de "Game Over" aparece na tela após uma colisão.

### EXPERIENCIA DO USUÁRIO

**1. INTERFACE DE USUÁRIO CLARA E INTUITIVA**
   * **Descrição:** Como um jogador, quero ter uma interface de usuário clara e intuitiva, para navegar facilmente pelo menu e funcionalidades do jogo.
  
   * **Critérios de Aceitação:**
   
     * O menu principal é fácil de navegar com opções claras como "Iniciar Jogo" e "Modo de jogo".

## INSTALAÇÃO
Para instalar o projeto é necessario:

1° Clonar o repositorio
```
git clone https://github.com/lizzpn/Snakegame.git
```

2° Entrar no diretório do código 
```
cd ./codigo/src
```

3° Compilar o projeto
```
g++ -o programa *.cpp -I../include
```

4° Executar o jogo
```
.\programa.exe
```
> [!TIP]
> A página principal do repositório pode ser acessada pelo link a seguir:
> https://github.com/lizzpn/Snakegame

## DOCUMENTAÇÃO

### História e Desenvolvimento

O “Snake Game” é um dos jogos eletrônicos mais tradicionais desde a década de 90, sendo icônico até os dias atuais. Originalmente lançado para fliperamas, o jogo era monocromático e o personagem era movido pelas setas do teclado de maneira simples e interativa.

Após anos de popularidade nos fliperamas, o jogo ganhou sua versão mobile, com o lançamento do Nokia 6110, que o trouxe para um público ainda maior. Com a evolução dos smartphones, o jogo nunca caiu no esquecimento, ganhando novas versões para aparelhos atuais com melhorias gráficas e funcionalidades adicionais. Essas atualizações mantêm o interesse pelo jogo vivo, atraindo tanto novos jogadores quanto aqueles que desejam reviver a nostalgia dos tempos passados.

No jogo, o usuário controla uma “cobrinha” em um ambiente delimitado. O objetivo do jogador é comer as “frutinhas” que aparecem aleatoriamente no ambiente, ganhando pontos, fazendo a cobrinha aumentar de tamanho e, consequentemente, elevando a dificuldade de forma gradativa. Quanto mais pontos o jogador fizer antes de perder, maior será seu recorde. A diversão está em tentar fazer o maior número de pontos possível a cada vez que se joga. O Snake Game não é apenas um jogo, mas um pedaço da história dos jogos eletrônicos que continua a evoluir e a encantar gerações.

### Visão Geral do Projeto

O sistema do Snake Game oferece uma variedade de funcionalidades voltadas para uma experiência de jogo envolvente e personalizada. Os jogadores podem iniciar um novo jogo a partir do menu principal, com a cobra posicionada em uma posição inicial padrão e a pontuação “resetada”. 

Durante o jogo, é possível visualizar a pontuação atual e os recordes anteriores. O jogo permite alternar entre diferentes modos de jogo, cada um com suas próprias regras e objetivos, e escolher entre três níveis de dificuldade (fácil, médio e difícil), que influenciam a velocidade da cobra e a frequência de surgimento dos alimentos. A dificuldade aumenta gradativamente com a pontuação. 

Os controles são simples, utilizando as teclas de seta para movimentar a cobra, e uma tecla específica para sair do jogo, com um prompt de confirmação para evitar saídas acidentais. A interface é clara e intuitiva, com um menu principal de fácil navegação, e o jogo notifica o jogador com uma mensagem de "Game Over" quando ocorre uma colisão.

> [!IMPORTANT]
> Uma sessão dedicada à documentação pode ser acessada no arquivo [docs](https://github.com/lizzpn/Snakegame/tree/main/docs) desse repositório
