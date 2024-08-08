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
3. [EXECUÇÃO](#execução)
4. [DOCUMENTAÇÃO](#documentação)

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

**3. ESCOLHER NÍVEL DE DIFICULDADE**
   * **Descrição:** Como um jogador, quero ser capaz de saber a diferença entre os niveis de dificuldade e escolher diferentes níveis de dificuldade, para ajustar o desafio do jogo conforme meu nível de habilidade.
  
   * **Critérios de Aceitação:**

     * Posso encontrar explicação clara sobre a diferença entre os três níveis de dificuldade.

     * Posso escolher entre pelo menos três níveis de dificuldade: fácil, médio e difícil.
    
     * A velocidade da cobra e a varia de acordo com a dificuldade selecionada.

**4. SURGIMENTO DE ALIMENTOS**
   * **Descrição:** Como um jogador, eu quero que surjam alimentos aleatoriamente na tela para que eu possa aumentar minha pontuação e o tamanho da cobra ao coletá-los.
  
   * **Critérios de Aceitação:**

     * Alimentos surgem em posições aleatórias na tela a intervalos regulares.
    
     * A cobra aumenta de tamanho ao coletar alimentos.
    
     * A pontuação do jogador aumenta ao coletar alimentos.

### CONTROLES E INTERAÇÃO

**1. CONTROLAR A DIREÇÃO DA COBRA**
   * **Descrição:** Como um jogador, quero ser capaz de controlar a direção da cobra usando as teclas de seta, para poder jogar facilmente.
  
   * **Critérios de Aceitação:**

     * Posso mover a cobra para cima, para baixo, para a esquerda e para a direita usando as teclas W, S, A e D, respectivamente.
    
     * A cobra não pode se mover na direção oposta à que está se movendo atualmente (evitando movimentos reversos instantâneos).

**2. TECLAS ESPECÍFICAS PARA SAIR DO JOGO**
   * **Descrição:** Como um jogador, quero ser capaz de usar teclas específicas para pausar e sair do jogo se for necessário, para uma melhor experiência de usuário.
  
   * **Critérios de Aceitação:**

     * Posso pressionar uma tecla específica (P) para pausar o jogo.
    
     * Posso voltar para o jogo ou sair após pausar.
    
     * Gostaria que tivesse uma tela de confirmação caso escolha sair.

**3. NOTIFICAÇÃO DE COLISÃO**
   * **Descrição:** Como um jogador, quero ser notificado quando a cobra colidir, para saber quando o jogo termina.
  
   * **Critérios de Aceitação:**

     * O jogo termina quando a cobra colidir consigo mesma.
    
     * O jogo termina quando a cobra colidir com os limites da tela.
    
     * Uma mensagem de "Fim de Jogo!" aparece na tela após uma colisão.

### EXPERIENCIA DO USUÁRIO

**1. INTERFACE DE USUÁRIO CLARA E INTUITIVA**
   * **Descrição:** Como um jogador, quero ter uma interface de usuário clara e intuitiva, para navegar facilmente pelo menu, instruções e funcionalidades do jogo.
  
   * **Critérios de Aceitação:**
   
     * O menu principal é fácil de navegar com opções claras como "Iniciar Jogo", "Exibir instruções" e "Selecionar dificuldade".

## INSTALAÇÃO
O jogo foi desenvolvido exclusivamente para o sistema operacional Windows, portanto, é importante que o passo a passo seja seguido nesse ambiente. Para instalar o projeto, é necessário:

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

## EXECUÇÃO

Para uma experiência ideal, execute o programa em tela cheia no terminal. Toda a formatação do jogo foi projetada considerando o uso do terminal em tela cheia, já que a taxa de atualização é crucial para a fluidez. 

## DOCUMENTAÇÃO

### História e Desenvolvimento

O “Snake Game” é um dos jogos eletrônicos mais tradicionais desde a década de 90, sendo icônico até os dias atuais. Originalmente lançado para fliperamas, o jogo era monocromático e o personagem era movido pelas setas do teclado de maneira simples e interativa.

Após anos de popularidade nos fliperamas, o jogo ganhou sua versão mobile, com o lançamento do Nokia 6110, que o trouxe para um público ainda maior. Com a evolução dos smartphones, o jogo nunca caiu no esquecimento, ganhando novas versões para aparelhos atuais com melhorias gráficas e funcionalidades adicionais. Essas atualizações mantêm o interesse pelo jogo vivo, atraindo tanto novos jogadores quanto aqueles que desejam reviver a nostalgia dos tempos passados.

No jogo, o usuário controla uma “cobrinha” em um ambiente delimitado. O objetivo do jogador é comer as “frutinhas” que aparecem aleatoriamente no ambiente, ganhando pontos, fazendo a cobrinha aumentar de tamanho e, consequentemente, elevando a dificuldade de forma gradativa. A diversão está em tentar fazer o maior número de pontos possível a cada vez que se joga. O Snake Game não é apenas um jogo, mas um pedaço da história dos jogos eletrônicos que continua a evoluir e a encantar gerações.

### Visão Geral do Projeto

O sistema do Snake Game oferece uma variedade de funcionalidades voltadas para uma experiência de jogo envolvente e personalizada. Os jogadores podem iniciar um novo jogo a partir do menu principal, com a cobra posicionada em uma posição inicial padrão e a pontuação “resetada”. 

Durante o jogo, é possível visualizar a pontuação atual. O jogo permite escolher entre três níveis de dificuldade (fácil, médio e difícil), que influenciam a velocidade da cobra. Devido ao crescimento da cobra, mesmo no nível fácil, a dificuldade aumenta gradativamente, proporcionando um desafio para todos os usuários.

Os controles são simples, utilizando as teclas de W, A, S e D para movimentar a cobra, e uma tecla específica 'P' para pausar o jogo, com um prompt de confirmação para evitar saídas acidentais. A interface é clara e intuitiva, com um menu principal de fácil navegação. O jogo notifica o jogador com uma mensagem de "Game Over" quando ocorre uma colisão.

### Dificuldades encontradas aos longo do projeto
Durante o desenvolvimento do jogo, as maiores dificuldades foram definir a velocidade da cobra, como pausar o jogo e entender como o tratamento de exceções se encaixaria no projeto. Sobre o tratamento de exceções, são utilizadas regras para atingir esse ponto. Por exemplo, não deve ser possível que o jogador digite uma letra aleatória no menu; se isso acontecer, é pedido uma resposta válida. Outro exemplo é evitar que a cobra vire para a direção oposta, pois, se isso ocorrer, ela "se comerá" e perderá. Então, definimos que, se o jogador der o comando para a cobra ir na direção oposta, esse comando será simplesmente ignorado.



> [!IMPORTANT]
> Uma sessão dedicada à documentação pode ser acessada no arquivo [docs](https://github.com/lizzpn/Snakegame/tree/main/docs) desse repositório
