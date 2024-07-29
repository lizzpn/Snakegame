#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>

class Snake
{
    private:
        /**
        * @brief Define as coordenadas de uma célula do caractere em um buffer de tela do console. Inclui duas variáveis:
        * @param X: O valor da coordenada horizontal ou da coluna
        * @param Y: A coordenada vertical ou o valor da linha.
        */
        COORD coordenadas;

        // Demais variáveis
        int tamanho_cobra;
        int velocidade_cobra;
        char direcao_cobra;

    public:
        // Construtor padrão: recebe a posição inicial da cobra e sua velocidade
        Snake(COORD posicao, int velocidade);

        // Função para mudar a direção da cobra
        void mudar_direcao(char nova_direcao);
};

#endif // SNAKE_H