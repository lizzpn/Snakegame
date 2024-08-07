#ifndef MENU_H
#define MENU_H

#include "Snake.h"
#include "Food.h"
#include <iostream>

class Menu {
public:
    enum NivelDificuldade { FACIL, MEDIO, DIFICIL }; // Define níveis de dificuldade

    // Construtor padrão
    Menu();

    // Função para exibir o menu
    void displayMenu();

    // Funções adicionais
    void telaInicial(); // Interface inicial
    void iniciarNovoJogo(Snake& snake, Food& food); // Inicia um novo jogo
    void exibirInstrucoes(); // Exibe instruções do jogo
    void alterarNivelDificuldade(); // Altera o nível de dificuldade
    void mostrarDiferencasNiveis(); // Mostra as diferenças entre os níveis
    void sairDoJogo(); // Sai do jogo
    void pausa(); // Coloca o jogo em pausa
    void exibirTelaFinal(int pontuacao); // Exibe a tela final
    NivelDificuldade getNivelDificuldade() const; // Retorna a dificuldade

    // Variável de controle
    bool inicio_jogo = false;
private:
    NivelDificuldade nivelDificuldade; // Armazena o nível de dificuldade atual

    void exibirDificuldade(); // Exibe o nível de dificuldade atual
    void solicitarNivelDificuldade(); // Solicita o nível de dificuldade ao usuário
};

#endif // MENU_H
