#include "menu.h"

int main() {
    int escolha;
    bool executando = true;
    ModoDeJogo modoAtual = CARREIRA;
    NivelDificuldade nivelAtual = FACIL;

    while (executando) {
        displayMenu();
        cin >> escolha;

        switch (escolha) {
            case 1:
                iniciarNovoJogo(modoAtual, nivelAtual);
                pausa();
                break;
            case 2:
                Instrucoes();
                pausa();
                break;
            case 3:
                alterarModoDeJogo(modoAtual);
                pausa();
                break;
            case 4:
                Dificuldade(nivelAtual);
                pausa();
                break;
            case 5:
                sairDoJogo();
                executando = false;
                break;
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
                pausa();
        }
    }

    return 0;
}

void displayMenu() {
    cout << "=============================" << endl;
    cout << "        SNAKE GAME" << endl;
    cout << "=============================" << endl;
    cout << "1. Iniciar Novo Jogo" << endl;
    cout << "2. Instrucoes" << endl;
    cout << "3. Alterar Modo de Jogo" << endl;
    cout << "4. Escolher Nivel de Dificuldade" << endl;
    cout << "5. Sair" << endl;
    cout << "=============================" << endl;
    cout << "Escolha uma opcao: ";
}

void iniciarNovoJogo(ModoDeJogo modo, NivelDificuldade nivel) {
    cout << "Iniciando novo jogo..." << endl;
    if (modo == CARREIRA) {
        cout << "Modo: Carreira" << endl;
    } else if (modo == SOBREVIVENCIA) {
        cout << "Modo: Sobrevivencia" << endl;
    }

    switch (nivel) {
        case FACIL:
            cout << "Nivel: Facil" << endl;
            break;
        case MEDIO:
            cout << "Nivel: Medio" << endl;
            break;
        case DIFICIL:
            cout << "Nivel: Dificil" << endl;
            break;
    }
}

void Instrucoes() { 
    cout << "Instrucoes do Jogo:" << endl;
    cout << "Objetivo: consumir as comidas que aparecem na tela sem colidir com a parede. " << endl;
    cout << "1. Use as setas do teclado para mover a cobra." << endl;
    cout << "2. Tente coletar o máximo de alimentos possivel para crescer." << endl;
    cout << "3. Evite colidir com as paredes e com o proprio corpo." << endl;
}

void alterarModoDeJogo(ModoDeJogo& modo) {
    int escolha;
    cout << "Selecione o modo de jogo:" << endl;
    cout << "1. Carreira" << endl;
    cout << "2. Sobrevivencia" << endl;
    cout << "Escolha: ";
    cin >> escolha;
    if (escolha == 1) {
        modo = CARREIRA;
        cout << "Modo de jogo alterado para Carreira." << endl;
    } else if (escolha == 2) {
        modo = SOBREVIVENCIA;
        cout << "Modo de jogo alterado para Sobrevivencia." << endl;
    } else {
        cout << "Opcao invalida!" << endl;
    }

    RegrasModo(modo);
}

void RegrasModo(ModoDeJogo modo) {
    if (modo == CARREIRA) {
        cout << "Modo Carreira:" << endl;
        cout << "Objetivo: Progredir atraves de niveis com dificuldade crescente." << endl;
        cout << "Regras: Complete cada nível coletando alimentos e evitando colisoes." << endl << endl;
    } else if (modo == SOBREVIVENCIA) {
        cout << "Modo Sobrevivencia:" << endl;
        cout << "Objetivo: Sobreviver o maximo de tempo possivel." << endl;
        cout << "Regras: Jogue ate colidir, tentando obter a maior pontuacao possivel." << endl << endl;
    }
}

void Dificuldade(NivelDificuldade& nivel) {
    int escolha;
    cout << "Selecione o nivel de dificuldade:" << endl;
    cout << "1. Facil" << endl;
    cout << "2. Medio" << endl;
    cout << "3. Dificil" << endl;
    cout << "Escolha: ";
    cin >> escolha;
    if (escolha == 1) {
        nivel = FACIL;
        cout << "Nivel de dificuldade alterado para Facil." << endl;
    } else if (escolha == 2) {
        nivel = MEDIO;
        cout << "Nivel de dificuldade alterado para Medio." << endl;
    } else if (escolha == 3) {
        nivel = DIFICIL;
        cout << "Nivel de dificuldade alterado para Dificil." << endl;
    } else {
        cout << "Opcao invalida!" << endl;
    }

    mostrarDiferencasNiveis();
}

void mostrarDiferencasNiveis() {
    cout << "Diferencas entre os niveis de dificuldade:" << endl;
    cout << "Facil: Cobra se move lentamente, menos alimentos." << endl;
    cout << "Medio: Cobra se move a uma velocidade moderada, mais alimentos." << endl;
    cout << "Dificil: Cobra se move rapidamente, muitos alimentos." << endl;
}

void sairDoJogo() {
    cout << "Saindo do jogo..." << endl;
}

void pausa() {
    cout << "Pressione Enter para continuar. ";
    cin.ignore();
    cin.get();
    cout << endl;
}
