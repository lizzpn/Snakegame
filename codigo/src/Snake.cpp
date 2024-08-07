#include "Snake.h"

// Definir o tamanho do tabuleiro
#define x_tabuleiro 50
#define y_tabuleiro 25

Snake::Snake(COORD posicao_inicial, int velocidade_inicial)
{
    // Atribui os parâmetros passados às variáveis private
    coordenadas = posicao_inicial;
    velocidade_cobra = velocidade_inicial;

    // Tamanho inicial da cobra é 1
    tamanho_cobra = 1;

    // Posição "nula", visto que a cobra é iniciada parada
    direcao_cobra = 'n';

    // Aumento do tamanho da cobra
    corpo.push_back(coordenadas);
}

COORD Snake::obter_posicao()
{
    return coordenadas;
}

vector<COORD> Snake::obter_corpo()
{
    return corpo;
}

void Snake::mudar_direcao(char nova_direcao)
{
    // Atribui o novo parâmetro da direção à variável private
    if (nova_direcao == 'b' && direcao_cobra == 'c') {} // Não faz nada
    else if (nova_direcao == 'c' && direcao_cobra == 'b') {} // Não faz nada
    else if (nova_direcao == 'd' && direcao_cobra == 'e') {} // Não faz nada 
    else if (nova_direcao == 'e' && direcao_cobra == 'd') {} // Não faz nada 
    else direcao_cobra = nova_direcao;
}

void Snake::mover_cobra()
{
    // Move a cabeça
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

    // Mover o resto do corpo
    corpo.push_back(coordenadas);

    if (corpo.size() > tamanho_cobra) corpo.erase(corpo.begin());
}
//ao comer a comida a cobra aumenta 1 unidade de tamanho
void Snake::crescimento()
{
    tamanho_cobra++;
}

bool Snake::colidiu()
{
    // Como a parede foi definida na posição (0, 0), caso a posição inferior dela seja menor que 1, significa que encostou na parede, e deverá ser detectado que ela colidiu.
    // Ademais caso a posição superior da cobra seja maior que os limites definidos da parede, significa que encostou na parede, detectando também que ela colidiu.
    if (coordenadas.X < 1 || coordenadas.Y < 1 || coordenadas.X > x_tabuleiro || coordenadas.Y > y_tabuleiro) return true;

    // Caso a cobra tenha colidido consigo mesma
    for (int i = 0; i < tamanho_cobra - 1; i++)
    {
        if (coordenadas.X == corpo[i].X && coordenadas.Y == corpo[i].Y) return true;
    }

    return false;
}

bool Snake::comeu(COORD comida_coord)
{
    //informa verdadeiro caso as coordenadas comida e snake são as mesmas (informa se foi comido)
    if(comida_coord.X == coordenadas.X && comida_coord.Y == coordenadas.Y)
    {
        return true;
    }
    else 
    {
        return false;
    }
}