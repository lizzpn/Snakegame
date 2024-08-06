#ifndef MENU_H
#define MENU_H

#include "Snake.h" // Inclui o cabeçalho da classe Snake
#include "Food.h"  // Inclui o cabeçalho da classe Food
#include <iostream> // Inclui a biblioteca de entrada e saída padrão

class Menu {
public:
    enum ModoDeJogo { CARREIRA, SOBREVIVENCIA }; // Define modos de jogo
    enum NivelDificuldade { FACIL, MEDIO, DIFICIL }; // Define níveis de dificuldade

    // Construtor padrão
    Menu();

    // Função para exibir o menu
    void displayMenu();

    // Funções adicionais
    void iniciarNovoJogo(Snake& snake, Food& food); // Inicia um novo jogo
    void exibirInstrucoes(); // Exibe instruções do jogo
    void alterarModoDeJogo(); // Altera o modo de jogo
    void alterarNivelDificuldade(); // Altera o nível de dificuldade
    void mostrarDiferencasNiveis(); // Mostra as diferenças entre os níveis
    void sairDoJogo(); // Sai do jogo
    void pausa(); // Coloca o jogo em pausa

private:
    ModoDeJogo modoDeJogo; // Armazena o modo de jogo atual
    NivelDificuldade nivelDificuldade; // Armazena o nível de dificuldade atual

    void exibirModo(); // Exibe o modo de jogo atual
    void exibirDificuldade(); // Exibe o nível de dificuldade atual
    void solicitarModoDeJogo(); // Solicita o modo de jogo ao usuário
    void solicitarNivelDificuldade(); // Solicita o nível de dificuldade ao usuário
};

#endif // MENU_H
