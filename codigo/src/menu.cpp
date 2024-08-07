#include "menu.h"

// Construtor que imprime o menu
Menu::Menu() {
    // Exibe a primeira interface
    displayMenu();
}

void Menu::displayMenu() {
    // Interface inicial
    std::cout << "=== Menu de Jogo ===" << std::endl;
    telaInicial();
}

void Menu::telaInicial()
{
    // Variáveis de controle
    int opcao = 5;

    // Opções iniciais
    while (opcao != 3 && opcao != 4)
    {

        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "0 - Exibir instruções do jogo; " << std::endl;
        std::cout << "1 - Exibir diferença entre dificuldades;" << std::endl;
        std::cout << "2 - Selecionar dificuldade de jogo" << std::endl;
        std::cout << "3 - Iniciar jogo" << std::endl;
        std::cout << "4 - Sair" << std::endl;

        std::cout << "Escolha: ";
        std::cin >> opcao;
    
        switch (opcao) {
        case 0:
            exibirInstrucoes();
            break;
        case 1:
            mostrarDiferencasNiveis();
            break;
        case 2:
            alterarNivelDificuldade();
            break;
        case 3:
            inicio_jogo = true;
            break;
        case 4:
            sairDoJogo();
            break;
        default:
            std::cout << "Opção inválida." << std::endl;
            break;
        }  
    }

}

void Menu::iniciarNovoJogo(Snake& snake, Food& food) {
    // Inicializa um novo jogo, possivelmente resetando o estado do Snake e Food
    // snake.reset(); // Reseta o estado da Snake -->avaliar criação dos métodos
    // food.generateNewPosition(snake.getSnakeBody()); // Gera uma nova posição para a Food
    std::cout << "Novo jogo iniciado." << std::endl;
    //exibirModo(); // Exibe o modo de jogo atual
    exibirDificuldade(); // Exibe o nível de dificuldade atual
}

void Menu::exibirInstrucoes() {
    std::cout << "\nInstruções do Jogo: Use as W, A, S e D para mover a cobra." << std::endl;
    std::cout << "Coma os alimentos para crescer e pontuar o máximo possível." << std::endl;
    std::cout << "Boa diversão!" << "\n\n";
}

void Menu::mostrarDiferencasNiveis() {
    std::cout << "\nDiferenças entre os níveis: Fácil, Médio, Difícil." << std::endl;
    std::cout << "Fácil: Menor velocidade, menos obstáculos." << std::endl;
    std::cout << "Médio: Velocidade moderada, alguns obstáculos." << std::endl;
    std::cout << "Difícil: Maior velocidade, mais obstáculos.\n" << std::endl;
}

void Menu::alterarNivelDificuldade() {
    solicitarNivelDificuldade(); // Solicita o nível de dificuldade ao usuário
    std::cout << "\nNível de dificuldade alterado." << std::endl;
    exibirDificuldade(); // Exibe o nível de dificuldade atual
}

void Menu::solicitarNivelDificuldade() {
    int escolha = 3;
    std::cout << "\nSelecione o Nível de Dificuldade: " << std::endl;
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

void Menu::exibirDificuldade() {
    std::cout << "Nível de Dificuldade Selecionado: ";
    switch (nivelDificuldade) {
        case FACIL:
            std::cout << "Fácil\n" << std::endl;
            break;
        case MEDIO:
            std::cout << "Médio\n" << std::endl;
            break;
        case DIFICIL:
            std::cout << "Difícil\n" << std::endl;
            break;
    }
}

void Menu::sairDoJogo() {
    std::cout << "Sair do jogo." << std::endl;
    exit(0); // Sai do programa
}

void Menu::pausa() {
    std::cout << "Jogo em pausa. Pressione qualquer tecla para continuar..." << std::endl;
    std::cin.get(); // Espera por entrada do usuário
}

void Menu::exibirTelaFinal(){
    system("cls");
    cout << "Fim de Jogo!" << endl;
}