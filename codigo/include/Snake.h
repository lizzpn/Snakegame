#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

using namespace std;

class Snake
{
    private:
        /**
        * @brief Define as coordenadas de uma célula do caractere em um buffer de tela do console. Inclui duas variáveis:
        * @param X: O valor da coordenada horizontal ou da coluna.
        * @param Y: A coordenada vertical ou o valor da linha.
        */
        COORD coordenadas;

        // Demais variáveis
        int tamanho_cobra;
        int velocidade_cobra;
        char direcao_cobra;

        vector<COORD> corpo;

    public:
        // Construtor padrão: recebe a posição inicial da cobra e sua velocidade
        Snake(COORD posicao_inicial, int velocidade_inicial);

        // Função que recebe a posição atual da cobra
        COORD obter_posicao();

        // Função que recebe o tamanho atual da cobra
        vector<COORD> obter_corpo();

        // Função para mudar a direção da cobra
        void mudar_direcao(char nova_direcao);

        // Função para atualizar a coordenada da cobra, baseada na direção
        void mover_cobra();

        // Função para atualizar o tamanho da cobra ao comer alimento
        void crescimento();

        // Função para verificar se a cobra colidiu
        bool colidiu();

        // Função para detectar quando a cobra comeu o alimento
        bool comeu(COORD comida_coord);

};

#endif // SNAKE_H