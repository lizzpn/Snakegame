#include <vector>
#include <cstdlib>
#include "Food.h"

Food::Food(int x_tabuleiro, int y_tabuleiro){
    criar_comidinha(x_tabuleiro, y_tabuleiro);
}

void Food::criar_comidinha(int x_tabuleiro, int y_tabuleiro){
    
     comidinha.X = (rand() % (x_tabuleiro - 3)) + 1;
     comidinha.Y = (rand() % (y_tabuleiro - 3)) + 1;
}

COORD Food::coor_comidinha(){
    return comidinha;
} 