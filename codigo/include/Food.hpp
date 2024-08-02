#ifndef FOOD_H
#define FOOD_H
#include <windows.h>
//preciso logo das coordenas para fazer as funções 
//coordenadas, coor aleatorias, 
class Food {

public:
    void criar_comidinha();
    COORD coor_comidinha();

private:
    
    COORD comidinha();
}
#endif