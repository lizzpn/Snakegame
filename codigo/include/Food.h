#ifndef Food_H
#define Food_H
#include <windows.h>

class Food {

public:
    // Construtor
    Food(int x_tabuleiro, int y_tabuleiro);

    //cria a comida
    void criar_comidinha(int x_tabuleiro, int y_tabuleiro);
    //mostra as coordenadas da comida
    COORD coor_comidinha();

private:
    //armazena as coordenadas
    COORD comidinha;
};
#endif