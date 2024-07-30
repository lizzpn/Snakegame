#include <iostream>

#include "Snake.h"
#include "Food.h"

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

        //! Condição do fim do jogo -> parada do loop
        if (cobra.colidiu()) fim_de_jogo = true;
    }

    return 0;
}