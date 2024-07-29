#include "Food.h"
#include <vector>
#include <cstdlib>

Food::Food(){
    criar_comidinha();
}
&vector<int> Food::coor_comidinha(){
    return coordenada;
}
void Food::criar_comidinha(int tabuleiro_max_x, int tabuleiro_max_y){
    //std::srand(std::time(0)); // Usar a hora atual como semente para o gerador de números aleatórios
    int x = rand() % tabuleiro_max_x;
    int y = rand() % tabuleiro_max_y;
    coordenada = {x,y};
}
