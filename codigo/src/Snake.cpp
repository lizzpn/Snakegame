#include "Snake.h"


Snake::Snake(COORD posicao, int velocidade)
{
    // Atribui os parâmetros passados às variáveis private
    this->coordenadas = posicao;
    this->velocidade_cobra = velocidade;

    // Tamanho inicial da cobra é 1
    this->tamanho_cobra = 1;

    // Posição "nula", visto que a cobra é iniciada parada
    this->direcao_cobra = 'n';
}

void Snake::mudar_direcao(char nova_direcao)
{
    // Atribui o novo parâmetro da direção à variável private
    this->direcao_cobra = nova_direcao;
}

void Snake::mover_cobra()
{
    switch(direcao_cobra)
    {
        //c: para cima
        case 'c': posicao.Y -= velocidade_cobra; 
        break;
        //b: para baixo
        case 'b': posicao.Y += velocidade_cobra; 
        break;
        //e: para esquerda
        case 'e': posicao.Y -= velocidade_cobra; 
        break;
        //d: para direita
        case 'd': posicao.Y -= velocidade_cobra; 
        break;
    }
}