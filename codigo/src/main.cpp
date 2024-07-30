#include <iostream>
#include <ctime>
#include <conio.h>

#include "Snake.h"
#include "Food.hpp"

using namespace std;

// Definir o tamanho do tabuleiro
#define x_tabuleiro 50
#define y_tabuleiro 25

int main()
{
    //todo Adicionar chamadas e classes

    // Chamada da função da Cobra, com posição e velocidades arbitrárias
    Snake cobra({x_tabuleiro/2, y_tabuleiro/2}, 1);

    // Variável que controlará o loop que rodá o jogo
    bool fim_de_jogo = false;

    // O jogo roda enquanto não a cobra não colidir
    while (!fim_de_jogo)
    {
        // Programa rodando
        //todo adicionar funções
        //board() ->adicionar função do tabuleiro

        //kbhit(): verifica se alguma tecla foi pressionada no tabuleiro sem que tenha que parar o loop/programa
        if(kbhit())
        {
            //getch(): retotna a tecla pressionada pelo usuário 
            switch(getch())
            {
                //aloca as teclas "w,a,s,d" para os caracteres cima, baixo, direite e esquerda
                case 'w': cobra.mudar_direcao('c');
                break;
                case 'd': cobra.mudar_direcao('d');
                break;
                case 'a': cobra.mudar_direcao('e');
                break;
                case 's': cobra.mudar_direcao('b');
                break;
            }
            cobra.mover_cobra();
        }

        //! Condição do fim do jogo -> parada do loop
        if (cobra.colidiu()) fim_de_jogo = true;
    }
    
    return 0;
}