#include "Snake.h"

Snake::Snake(COORD posicao_inicial, int velocidade_inicial)
{
    // Atribui os parâmetros passados às variáveis private
    coordenadas = posicao_inicial;
    velocidade_cobra = velocidade_inicial;

    // Tamanho inicial da cobra é 1
    tamanho_cobra = 1;

    // Posição "nula", visto que a cobra é iniciada parada
    direcao_cobra = 'n';
}

void Snake::mudar_direcao(char nova_direcao)
{
    // Atribui o novo parâmetro da direção à variável private
    direcao_cobra = nova_direcao;
}

void Snake::mover_cobra()
{
    switch(direcao_cobra)
    {
        //c: para cima
        case 'c': coordenadas.Y -= velocidade_cobra; 
        break;
        //b: para baixo
        case 'b': coordenadas.Y += velocidade_cobra; 
        break;
        //e: para esquerda
        case 'e': coordenadas.X -= velocidade_cobra; 
        break;
        //d: para direita
        case 'd': coordenadas.X += velocidade_cobra; 
        break;
    }
}