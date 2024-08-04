#include <vector>
#include <cstdlib>
#include "Food.hpp"

Food::Food(x.tabuleiro, y.tabuleiro){
    criar_comidinha(x.tabuleiro, y.tabuleiro);
}

void Food::criar_comidinha(x_tabuleiro, y_tabuleiro){
    
     comidinha.X = rand() % (x_tabuleiro - 1);
     comidinha.Y = rand() % (y_tabuleiro - 1);
}

COORD Food::coor_comidinha(){
    return comidinha;
} 