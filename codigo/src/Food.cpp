#include <vector>
#include <cstdlib>
#include "Food.h"

Food::Food(int x.tabuleiro, int y.tabuleiro){
    criar_comidinha(int x.tabuleiro,int y.tabuleiro);
}

void Food::criar_comidinha(int x_tabuleiro, int y_tabuleiro){
    
     comidinha.X = rand() % (x_tabuleiro - 1);
     comidinha.Y = rand() % (y_tabuleiro - 1);
}

COORD Food::coor_comidinha(){
    return comidinha;
} 