#ifndef Food_H
#define Food_H
#include <windows.h>

class Food {

public:
    //cria a comida
    void criar_comidinha();
    //mostra as coordenadas da comida
    COORD coor_comidinha();

private:
    //armazena as coordenadas
    COORD comidinha();
};
#endif