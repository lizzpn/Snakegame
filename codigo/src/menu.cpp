#include "menu.h"

// Construtor que solicita ao usuário o modo de jogo e o nível de dificuldade
Menu::Menu() {
    solicitarModoDeJogo(); // Solicita o modo de jogo ao usuário
    solicitarNivelDificuldade(); // Solicita o nível de dificuldade ao usuário
}

void Menu::displayMenu() {
    std::cout << "=== Menu de Jogo ===" << std::endl;
    exibirModo(); // Exibe o modo de jogo atual
    exibirDificuldade(); // Exibe o nível de dificuldade atual
}

void Menu::iniciarNovoJogo(Snake& snake, Food& food) {
    // Inicializa um novo jogo, possivelmente resetando o estado do Snake e Food
    // snake.reset(); // Reseta o estado da Snake -->avaliar criação dos métodos
    // food.generateNewPosition(snake.getSnakeBody()); // Gera uma nova posição para a Food
    std::cout << "Novo jogo iniciado." << std::endl;
    exibirModo(); // Exibe o modo de jogo atual
    exibirDificuldade(); // Exibe o nível de dificuldade atual
}

void Menu::exibirInstrucoes() {
    std::cout << "Instruções do Jogo: Use as W, A, S e D para mover a cobra e coma os alimentos para crescer." << std::endl;
}

void Menu::alterarModoDeJogo() {
    solicitarModoDeJogo(); // Solicita o modo de jogo ao usuário
    std::cout << "Modo de jogo alterado." << std::endl;
    exibirModo(); // Exibe o modo de jogo atual
}

void Menu::alterarNivelDificuldade() {
    solicitarNivelDificuldade(); // Solicita o nível de dificuldade ao usuário
    std::cout << "Nível de dificuldade alterado." << std::endl;
    exibirDificuldade(); // Exibe o nível de dificuldade atual
}

void Menu::mostrarDiferencasNiveis() {
    std::cout << "Diferenças entre os níveis: Fácil, Médio, Difícil." << std::endl;
    std::cout << "Fácil: Menor velocidade, menos obstáculos." << std::endl;
    std::cout << "Médio: Velocidade moderada, alguns obstáculos." << std::endl;
    std::cout << "Difícil: Maior velocidade, mais obstáculos." << std::endl;
}

void Menu::sairDoJogo() {
    std::cout << "Sair do jogo." << std::endl;
    exit(0); // Sai do programa
}

void Menu::pausa() {
    std::cout << "Jogo em pausa. Pressione qualquer tecla para continuar..." << std::endl;
    std::cin.get(); // Espera por entrada do usuário
}

void Menu::exibirModo() {
    std::cout << "Modo de Jogo Selecionado: ";
    switch (modoDeJogo) {
        case CARREIRA:
            std::cout << "Carreira" << std::endl;
            break;
        case SOBREVIVENCIA:
            std::cout << "Sobrevivência" << std::endl;
            break;
    }
}

void Menu::exibirDificuldade() {
    std::cout << "Nível de Dificuldade Selecionado: ";
    switch (nivelDificuldade) {
        case FACIL:
            std::cout << "Fácil" << std::endl;
            break;
        case MEDIO:
            std::cout << "Médio" << std::endl;
            break;
        case DIFICIL:
            std::cout << "Difícil" << std::endl;
            break;
    }
}

void Menu::solicitarModoDeJogo() {
    int escolha;
    std::cout << "Selecione o Modo de Jogo: " << std::endl;
    std::cout << "0 - Carreira" << std::endl;
    std::cout << "1 - Sobrevivência" << std::endl;
    std::cout << "Escolha: ";
    std::cin >> escolha;

    switch (escolha) {
        case 0:
            modoDeJogo = CARREIRA;
            break;
        case 1:
            modoDeJogo = SOBREVIVENCIA;
            break;
        default:
            std::cout << "Escolha inválida, definindo para Carreira." << std::endl;
            modoDeJogo = CARREIRA;
            break;
    }
}

void Menu::solicitarNivelDificuldade() {
    int escolha;
    std::cout << "Selecione o Nível de Dificuldade: " << std::endl;
    std::cout << "0 - Fácil" << std::endl;
    std::cout << "1 - Médio" << std::endl;
    std::cout << "2 - Difícil" << std::endl;
    std::cout << "Escolha: ";
    std::cin >> escolha;

    switch (escolha) {
        case 0:
            nivelDificuldade = FACIL;
            break;
        case 1:
            nivelDificuldade = MEDIO;
            break;
        case 2:
            nivelDificuldade = DIFICIL;
            break;
        default:
            std::cout << "Escolha inválida, definindo para Fácil." << std::endl;
            nivelDificuldade = FACIL;
            break;
    }
}
