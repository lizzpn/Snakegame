#include <iostream>
#include <ctime>
#include <conio.h>

#include "Snake.h"
#include "Food.hpp"

using namespace std;

// Definir o tamanho do tabuleiro
#define x_tabuleiro 50
#define y_tabuleiro 25

// Chamada da função da Cobra, com posição e velocidades arbitrárias
Snake cobra({x_tabuleiro/2, y_tabuleiro/2}, 1);

void board()
{
    COORD cobra_posicao = cobra.obter_posicao();
    for(int i = 0; i < y_tabuleiro; i++)
    {
        //printando o tabuleiro com # em sua volta e espaços em branco no meio
        //rever como printar a cobrinha
        cout<<"\t\t#";
        for(int j = 0; j < x_tabuleiro; j++)
        {
            if(i == 0 || i == y_tabuleiro - 1)
            {
                cout<< '#';
            }
            else if(i == cobra_posicao.Y && j == cobra_posicao.X)
            {
                //implementar pós alterções
            }
            //adicionar else if da comida
            else cout<< ' ';
        }
        cout<<"#\n";
    }
}

int main()
{
    //todo Adicionar chamadas e classes

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

        // Obtém o handle para o dispositivo de saída padrão (console)
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        // Define a estrutura COORD com a posição (0, 0) - canto superior esquerdo do console
        COORD pos = {0, 0};

        // Move o cursor do console para a posição especificada em 'pos'
        SetConsoleCursorPosition(hConsole, pos);        
    }
    
    return 0;
}