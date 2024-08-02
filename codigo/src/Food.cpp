#include <vector>
#include <cstdlib>
#include "Food.h"

Food::Food(x.tabuleiro, y.tabuleiro){
    criar_comidinha(x.tabuleiro, y.tabuleiro);
}

void Food::criar_comidinha(x_tabuleiro, y_tabuleiro){
    
     comidinha.X = rand() % (x_tabuleiro);
     comidinha.Y = rand() % (y_tabuleiro);
}

COORD Food::coor_comidinha(){
    return comidinha;
} 