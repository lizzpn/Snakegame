#include <vector>
#include <cstdlib>
#include "Food.h"

Food::food(x.tabuleiro, y.tabuleiro){
    criar_comidinha(x.tabuleiro, y.tabuleiro);
}

void Food::criar_comidinha(x_tabuleiro, y_tabuleiro){
    //srand(time(0)); // Usar a hora atual como semente para o gerador de números aleatórios (deve ser feito na main)
     comidinha.X = rand() % (x_tabuleiro);
     comidinha.Y = rand() % (y_tabuleiro);
}

COORD Food::coor_comidinha(){
    return comidinha;
} 