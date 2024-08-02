#ifndef Food_H
#define Food_H
#include <windows.h>

class Food {

public:
    void criar_comidinha();
    COORD coor_comidinha();

private:
    
    COORD comidinha();
}
#endif