#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

enum ModoDeJogo { CARREIRA, SOBREVIVENCIA };
enum NivelDificuldade { FACIL, MEDIO, DIFICIL };

void displayMenu();
void iniciarNovoJogo(ModoDeJogo modo, NivelDificuldade nivel);
void Instrucoes();
void alterarModoDeJogo(ModoDeJogo& modo);
void RegrasModo(ModoDeJogo modo);
void Dificuldade(NivelDificuldade& nivel);
void mostrarDiferencasNiveis();
void sairDoJogo();
void pausa();

#endif // MENU_H
