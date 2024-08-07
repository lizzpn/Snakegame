#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
#include <locale>

#include "../include/Snake.h"
#include "../include/Food.h"
#include "../include/Menu.h"

using namespace std;

// Definir o tamanho do tabuleiro
#define x_tabuleiro 50
#define y_tabuleiro 25

// Chamada da função da Cobra, com posição e velocidades arbitrárias
Snake cobra({x_tabuleiro/2, y_tabuleiro/2}, 1);

// Chama classe comida
Food comida(x_tabuleiro, y_tabuleiro);

int pontuacao;

void board()
{
    COORD cobra_posicao = cobra.obter_posicao();
    COORD comida_posicao = comida.coor_comidinha();
    vector<COORD> cobra_corpo = cobra.obter_corpo();

    // Impressão do score
    cout << "SCORE: " << pontuacao << "\n\n";

    for(int i = 0; i < y_tabuleiro; i++)
    {
        // Printando o tabuleiro com # em sua volta e espaços em branco no meio
        cout << "\t\t#";

        for(int j = 0; j < x_tabuleiro; j++)
        {
            // Limites tabuleiro
            if (i == 0 || i == y_tabuleiro - 1)
            {
                cout << "#";
            }

            // Gera a comida
            else if (i == comida_posicao.Y && j + 1 == comida_posicao.X)
            {
                cout << "@";
            }

            // Gera a cabeça da cobra 
            else if (i == cobra_posicao.Y && j + 1 == cobra_posicao.X)
            {
                cout << "0";
            }

            // Gera o resto do corpo
            else 
            {
                bool FazParteDoCorpo = false;
                for (int k = 0; k < cobra_corpo.size(); k++)
                {
                    if (i == cobra_corpo[k].Y && (j + 1) == cobra_corpo[k].X)
                    {
                        // Caractere do resto do corpo
                        cout << "o";
                        FazParteDoCorpo = true;
                        break;
                    }
                }

                if (!FazParteDoCorpo)
                {
                    cout << " ";
                }
            }
        }

        // Impressão do limite inferior do tabuleiro
        cout << "#\n";
    }
}

int main()
{
    //! Faz o terminal imprimir os caracteres acentuados
    setlocale(LC_ALL, "Portuguese_Brasil");
    system("chcp 65001 > nul");

    // Usar a hora atual como semente para o gerador de números aleatórios
    srand(time(0));
    
    // Inicialização da pontuação
    pontuacao = 0;
    
    // Criação da classe Menu,
    Menu menu;
    
    // Inicializa um novo jogo
    menu.iniciarNovoJogo(cobra, comida);
    
    // Variável que controlará o loop que rodá o jogo
    bool fim_de_jogo = false;

    //variavel para atualização de frames
    int frames = 0;

    // O jogo só aparece quando o usuário termina de acessar o menu
    if (menu.inicio_jogo)
    {
        // O jogo roda enquanto não a cobra não colidir
        while (1)
        {
            //* Programa rodando

            // Chamada do tabuleiro
            board();

            // Limpa o terminal
            if(frames%20==0){
                system("cls");
            }
            frames++;

            //kbhit(): verifica se alguma tecla foi pressionada no tabuleiro sem que tenha que parar o loop/programa
            if(kbhit())
            {
                //getch(): retotna a tecla pressionada pelo usuário 
                switch(getch())
                {
                    // Aloca as teclas "w,a,s,d" para os caracteres cima, baixo, direite e esquerda
                    case 'w':
                    case 'W':
                        cobra.mudar_direcao('c');
                        break;
                    case 'd':
                    case 'D':
                        cobra.mudar_direcao('d');
                        break;
                    case 'a':
                    case 'A':
                        cobra.mudar_direcao('e');
                        break;
                    case 's':
                    case 'S':
                        cobra.mudar_direcao('b');
                        break;
                    case 'p':
                    case 'P':
                        system("cls");
                        menu.pausa();
                        system("cls");
                }
            }

            //! Condição do fim do jogo -> parada do loop
            if (cobra.colidiu()) 
            {
                system("cls");
                menu.exibirTelaFinal(pontuacao);
                exit(1);
            }

            // Verifica se a cobra comeu a comida
            if (cobra.comeu(comida.coor_comidinha()))
            {
                // Gera uma comida aleatória
                comida.criar_comidinha(x_tabuleiro, y_tabuleiro);

                // Aumenta o tamanho da cobra
                cobra.crescimento();

                // Aumenta o score
                pontuacao += 1;
            }

            // Move a cobra
            cobra.mover_cobra();

            // Obtém o handle para o dispositivo de saída padrão (console)
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

            // Define a estrutura COORD com a posição (0, 0) - canto superior esquerdo do console
            COORD pos = {0, 0};

            // Move o cursor do console para a posição especificada em 'pos'
            SetConsoleCursorPosition(hConsole, pos);

            // Controla a velocidade do jogo baseado na dificuldade
            if (menu.getNivelDificuldade() == menu.FACIL)
            {
                Sleep(75); // Atraso de 75 milissegundos para controlar a velocidade do jogo 
            }
            else if (menu.getNivelDificuldade() == menu.MEDIO)
            {
                Sleep(25); // Atraso de 100 milissegundos para controlar a velocidade do jogo   
            }
            else if (menu.getNivelDificuldade() == menu.DIFICIL) {} // Sem atraso        
        }
    }
    
    return 0;
}