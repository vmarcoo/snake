//##################################
//#                                #
//#      AUTORES DO PROJETO:       #
//#                                #
//# MARCO VINICIUS DA COSTA BUSATO #
//#      FELYPE CESAR MOLINARI     #
//#     LAURA FERRARI HECKMANN     #
//#                                #
//##################################

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <chrono>
#include <thread>
#include <limits>
#include <iomanip>
#include <fstream>
#include <random>
#include <vector>
#include <algorithm>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

int m[17][56] = {
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

int m2[17][56] = {
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

int m3[17][56] = {
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
};

struct Snake{
    int x, y;
};

struct Rankings{
    int posicao;
    string data;
    string nome;
    string pontuacao;
    string tempo;
};

struct Configuracoes{
    int modoDeJogo;
    int dificuldade = 1;
    int fase = 1;
};

Configuracoes configuracaoAtual;
// Vetor que controla a cobra e seu tamanho
Snake head;
vector<Snake> snake;

int movimentos = 0;
int movimentacao = 0;
int direcaoAtual = 4;
bool cobraInicial = false;
bool vireEsquerda = false;
bool vireDireita = false;
bool vireCima = false;
bool vireBaixo = false;
bool acompanhaCorpo = false;
bool vidaExtra = false;
int morteSubita = 0;
bool geraMorteSubita = true;
int minutos;
int segundos;
int score = 0;
int duracaoMinutos;
int duracaoSegundos;
string nome;
bool geraFrutas = true;
int xFruta;
int yFruta;
bool tocaMusica = true;
bool gameLoop = true;
char tecla;
int timerMov = 0;

// Inicializa o jogo em tela cheia
void telaCheia(){
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = VK_F11;
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
}

// Funções de controle da movimentação
bool cima(vector<Snake> snake){
    if (m[snake[0].x-1][snake[0].y] == 1 || m[snake[0].x-1][snake[0].y] == 2 || m[snake[0].x-1][snake[0].y] == 4){
        return false;
    }
    return true;
}

bool baixo(vector<Snake> snake){
    if (m[snake[0].x+1][snake[0].y] == 1 || m[snake[0].x+1][snake[0].y] == 2 || m[snake[0].x+1][snake[0].y] == 4){
        return false;
    }
    return true;  
}

bool esquerda(vector<Snake> snake){
    if (m[snake[0].x][snake[0].y-1] == 1 || m[snake[0].x][snake[0].y-1] == 2 || m[snake[0].x][snake[0].y-1] == 4){
        return false;
    }
    return true;
}

bool direita(vector<Snake> snake){
    if (m[snake[0].x][snake[0].y+1] == 1 || m[snake[0].x][snake[0].y+1] == 2 || m[snake[0].x][snake[0].y+1] == 4){
        return false;
    }
    return true;
}

void incrementaScore(int &score, int dificuldade){
    if (dificuldade == 1){score += 10;}
    if (dificuldade == 2){score += 15;}
    if (dificuldade == 3){score += 20;}
}

void vitoria(){
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     Parabens! Voce Venceu!" << endl;
    cout << endl;
    cout << endl;
    cout << "                                        Pontuacao: " << score << endl;
    char enter = '\r';
    char key;
    while (true) {
        key = _getch();
        if (key == enter){break;}
    }
    system("cls");
}

// Verifica se as entradas no cin são válidas
void verificaCin(){
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                     Erro! Opcao invalida!\n\n";
    cout << endl;
    cout << "                             Pressione qualquer tecla para continuar...";
    _getch();
    system("cls");

    cin.clear();

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Controles de menu/inicialização
void inicioFim(int score){
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                                         Game Over!" << endl;
    cout << endl;
    cout << endl;
    cout << "                                        Pontuacao: " << score << endl;
    char enter = '\r';
    char key;
    while (true) {
        key = _getch();
        if (key == enter){break;}
    }
    system("cls");
}

void inicioFim(vector<Rankings> vetorRankings){
    system("cls");
    int opcao;
    bool opcaoValida;

    do{
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "                                Seja bem-vindo(a) ao Snake!" << endl;
        cout << endl;
        cout << endl;
        cout << "                                  Pressione 1 para iniciar," << endl;
        cout << "                                   2 para estatisticas ou" << endl;
        cout << "                                    3 para sair do jogo" << endl << endl;
        cout << "                                     Opcao escolhida: ";
        if (!(cin >> opcao) || cin.peek() != '\n' || (opcao != 1 && opcao != 2 && opcao != 3)){
            verificaCin();
            opcaoValida = false;
        }

        else{
            opcaoValida = true;
            system("cls");
        }

    } while (!opcaoValida);

    if (opcao == 1){
        int opcaoJogo;
        bool opcaoJogoValida;
        do {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "                                Escolha a opcao desejada: " << endl;
            cout << endl;
            cout << endl;
            cout << "                              1 - Controlar a cobra sozinho" << endl;
            cout << "                              2 - Deixar que o PC controle" << endl;
            cout << "                              3 - Modo desafio (5 min)" << endl << endl;
            cout << "                                     Opcao escolhida: ";
            if (!(cin >> opcaoJogo) || cin.peek() != '\n' || (opcaoJogo != 1 && opcaoJogo != 2 && opcaoJogo != 3)){
                verificaCin();
                opcaoJogoValida = false;
            }

            else{
                opcaoJogoValida = true;
                system("cls");
            }

        }while (!opcaoJogoValida);

        if (opcaoJogo == 1){
            configuracaoAtual.modoDeJogo = 1;
            int opcaoDificuldade;
            bool opcaoDificuldadeValida;
            do {
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                                Escolha a dificuldade: " << endl;
                cout << endl;
                cout << endl;
                cout << "                                     1 - Facil" << endl;
                cout << "                                     2 - Medio" << endl;
                cout << "                                     3 - Dificil" << endl << endl;
                cout << "                                   Opcao escolhida: ";
                if (!(cin >> opcaoDificuldade) || cin.peek() != '\n' || (opcaoDificuldade != 1 && opcaoDificuldade != 2 && opcaoDificuldade != 3)){
                    verificaCin();
                    opcaoDificuldadeValida = false;
                }

                else{
                    opcaoDificuldadeValida = true;
                    system("cls");
                }

            }while (!opcaoDificuldadeValida);

            if (opcaoDificuldade == 1){configuracaoAtual.dificuldade = 1;}
            if (opcaoDificuldade == 2){configuracaoAtual.dificuldade = 2;}
            if (opcaoDificuldade == 3){configuracaoAtual.dificuldade = 3;}

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "                                      Insira seu nome: " << endl;
            cout << "                                          ";
            cin.ignore();
            getline(cin, nome);
            if (nome.empty()) {nome = "Anonimo";}
            system("cls");

            for (int i = 45; i > 42; i--){
                head.x = 14;
                head.y = i;
                snake.push_back(head);
            }
        }

        if (opcaoJogo == 2){
            configuracaoAtual.modoDeJogo = 2;
            for (int i = 45; i > 42; i--){
                head.x = 14;
                head.y = i;
                snake.push_back(head);
            }
        }

        if (opcaoJogo == 3){
            configuracaoAtual.modoDeJogo = 3;
            bool cobraDesafio = true;
            int snakeGrande = 0;
            int i = 6;

            while (cobraDesafio == true){ 

                if (i == 0){cobraDesafio = false; break;}

                if (i == 6){
                    for (int j = 37; j > 34; j--){
                        head.x = i;
                        head.y = j;
                        snake.push_back(head);
                        if (j == 35){i--;}
                        snakeGrande++;
                    }
                }

                if (i % 2 == 0){
                    for (int j = 54; j > 34; j--){
                        head.x = i;
                        head.y = j;
                        snake.push_back(head);
                        if (j == 35){i--;}
                        snakeGrande++;
                        if (snakeGrande == 103){cobraDesafio = false;}
                    }
                }
            
                if (i % 2 != 0){
                    for (int j = 35; j < 55; j++){
                        head.x = i;
                        head.y = j;
                        snake.push_back(head);
                        if (j == 54){i--;}
                        snakeGrande++;
                        if (snakeGrande == 103){cobraDesafio = false;}
                    }
                }
            }
            direcaoAtual = 4;
        }
    }
    if (opcao == 2){
        system("cls");
        cout << endl;
        cout << "------------------------------------------------------------------------------------------" << endl << endl;
        cout << "                                      ESTATISTICAS:\n" << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        for (long long unsigned int i = 0; i < vetorRankings.size(); i++){
            cout << endl;
            cout << " Ranking: " << vetorRankings[i].posicao << char(167) << endl << endl;
            cout << " Data: " << vetorRankings[i].data << endl;
            cout << " Nome: " << vetorRankings[i].nome << endl;
            cout << " Pontuacao: " << vetorRankings[i].pontuacao << endl;
            cout << " Tempo: " << vetorRankings[i].tempo << endl << endl;
            cout << "------------------------------------------------------------------------------------------" << endl;
        }
        cout << endl;
        cout << "                          Pressione ENTER para retornar ao menu...\n\n";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD topLeft = {0, 0};
        SetConsoleCursorPosition(hConsole, topLeft);
        _getch();
        inicioFim(vetorRankings);
    }
    if (opcao == 3){exit(0);}
}

// Criação de arquivo base para estatisticas
void criarArquivo(){

    ifstream infile("estatisticas.txt");
    infile.close();

    ofstream estatisticas("estatisticas.txt", ios::app);

    if (estatisticas.is_open()) {
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);

        estatisticas << setw(2) << setfill('0') << localTime->tm_mday << "/"
                     << setw(2) << setfill('0') << localTime->tm_mon + 1 << "/"
                     << setw(2) << setfill('0') << localTime->tm_year + 1900
                     << " - "
                     << setw(2) << setfill('0') << localTime->tm_hour << ":"
                     << setw(2) << setfill('0') << localTime->tm_min << ":"
                     << setw(2) << setfill('0') << localTime->tm_sec << endl;
        estatisticas << nome << endl;
        estatisticas << score << endl;
        estatisticas << setw(2) << setfill('0') << duracaoMinutos << ":"
                     << setw(2) << setfill('0') << duracaoSegundos << endl;
        estatisticas.close();
    }
}

// Ordenação dos rankings
bool ordenaRankings(const Rankings& a, const Rankings& b){
    int pontuacao_a = stoi(a.pontuacao);
    int pontuacao_b = stoi(b.pontuacao);

    if (pontuacao_a != pontuacao_b) {
        return pontuacao_a > pontuacao_b;
    }

    else {
        string tempo_a = a.tempo;
        string tempo_b = b.tempo;
        tempo_a.erase(remove(tempo_a.begin(), tempo_a.end(), ':'), tempo_a.end());
        tempo_b.erase(remove(tempo_b.begin(), tempo_b.end(), ':'), tempo_b.end());
        int tempo_int_a = stoi(tempo_a);
        int tempo_int_b = stoi(tempo_b);
        return tempo_int_a < tempo_int_b;
    }
}

// Função que popula o vetor com os rankings ordenados
void leituraPontuacao(vector<Rankings>& vetorRankings){
    ifstream arquivo("estatisticas.txt");
    if (arquivo.is_open()) {
        string frase;
        Rankings ranking;
        while (getline(arquivo, frase)) {
            ranking.data = frase;
            getline(arquivo, ranking.nome);
            getline(arquivo, ranking.pontuacao);
            getline(arquivo, ranking.tempo);
            vetorRankings.push_back(ranking);
        }
        arquivo.close();
    }
}

// Leitura arquivo base de estatísticas
void lerArquivo(){
    ifstream infile("estatisticas.txt");
    infile.close();

    ofstream estatisticas("estatisticas.txt", ios::app);

    if (estatisticas.is_open()) {
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);

        estatisticas << setw(2) << setfill('0') << localTime->tm_mday << "/"
                     << setw(2) << setfill('0') << localTime->tm_mon + 1 << "/"
                     << setw(2) << setfill('0') << localTime->tm_year + 1900
                     << " - "
                     << setw(2) << setfill('0') << localTime->tm_hour << ":"
                     << setw(2) << setfill('0') << localTime->tm_min << ":"
                     << setw(2) << setfill('0') << localTime->tm_sec << endl;
        estatisticas << nome << endl;
        estatisticas << score << endl;
        estatisticas << setw(2) << setfill('0') << duracaoMinutos << ":"
                     << setw(2) << setfill('0') << duracaoSegundos << endl;
        estatisticas.close();
    }
}

int main(){

    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);

    telaCheia();

    // Criação de um vetor ordenado com os rankings de todos os jogadores (baseado no arquivo)
    Rankings ranks;
    vector<Rankings> vetorRankings;
    leituraPontuacao(vetorRankings);
    sort(vetorRankings.begin(), vetorRankings.end(), ordenaRankings);

    // Ranking ordenado (com base na posição ocupada dentro do vetor)
    for (long long unsigned int i = 0; i < vetorRankings.size(); i++){
        vetorRankings[i].posicao = i+1;
    }

    // Impressão do menu inicial
    inicioFim(vetorRankings);

    // Registro do cronômetro
    auto start = chrono::steady_clock::now();

    while (gameLoop){

        if (configuracaoAtual.modoDeJogo == 2){
            if ((cima(snake) == false) && (baixo(snake) == false) && (esquerda(snake) == false) && (direita(snake) == false)){gameLoop = false;}
        }

        if (configuracaoAtual.modoDeJogo == 1 || configuracaoAtual.modoDeJogo == 2){
            if (configuracaoAtual.fase == 1 && score >= 300){configuracaoAtual.fase = 2; cobraInicial = true;}
            if (configuracaoAtual.fase == 2 && score >= 600){configuracaoAtual.fase = 3; cobraInicial = true;}
            if (configuracaoAtual.fase == 3 && score >= 1000){gameLoop = false;}

            if (configuracaoAtual.fase == 2){
                for (int i = 0; i < 17; i++){
                    for (int j = 0; j < 56; j++){
                        m[i][j] = m2[i][j];
                    }
                }
            }

            else if (configuracaoAtual.fase == 3){
                for (int i = 0; i < 17; i++){
                    for (int j = 0; j < 56; j++){
                        m[i][j] = m3[i][j];
                    }
                }
            }

            if (configuracaoAtual.fase == 2 && cobraInicial == true){
                snake.clear();
                for (int i = 39; i > 36; i--){
                    head.x = 1;
                    head.y = i;
                    snake.push_back(head);
                }
                direcaoAtual = 4;
                cobraInicial = false;
            }

            if (configuracaoAtual.fase == 3 && cobraInicial == true){
                snake.clear();
                for (int i = 39; i > 36; i--){
                    head.x = 1;
                    head.y = i;
                    snake.push_back(head);
                }
                direcaoAtual = 4;
                cobraInicial = false;
            }
        }

        if (configuracaoAtual.modoDeJogo == 1){
            if (morteSubita == 1000){
                morteSubita = 0;
                geraMorteSubita = true;

                if (configuracaoAtual.fase == 1){
                    for (int i = 0; i < 17; i++){
                        for (int j = 0; j < 56; j++){
                            if (m[i][j] == 8){m[i][j] = 0;}
                        }
                    }    
                }

                if (configuracaoAtual.fase == 2){
                    for (int i = 0; i < 17; i++){
                        for (int j = 0; j < 56; j++){
                            if (m2[i][j] == 8){m2[i][j] = 0;}
                        }
                    }
                }

                if (configuracaoAtual.fase == 3){
                    for (int i = 0; i < 17; i++){
                        for (int j = 0; j < 56; j++){
                            if (m3[i][j] == 8){m3[i][j] = 0;}
                        }
                    }
                }
            }

            if (morteSubita == 500 && geraMorteSubita == true){
                geraMorteSubita = false;
                bool morteGerada;
                
                do
                {
                    int xMorte = (rand() % 15) + 1;
                    int yMorte = (rand() % 20) + 35;
                    if(m[xMorte][yMorte] == 0){
                        if (configuracaoAtual.fase == 1){m[xMorte][yMorte] = 8;}
                        if (configuracaoAtual.fase == 2){m2[xMorte][yMorte] = 8;}
                        if (configuracaoAtual.fase == 3){m3[xMorte][yMorte] = 8;}
                        morteGerada = true;
                    }
                }
                while(morteGerada == false);
            }
        }

        // Registro do cronômetro
        auto now = chrono::steady_clock::now();
        auto duracao = chrono::duration_cast<chrono::seconds>(now - start).count();

        minutos = duracao / 60;
        segundos = duracao % 60;

        if (configuracaoAtual.modoDeJogo == 3){
            if (minutos == 5){gameLoop = false;}
        }

        if (tocaMusica){
            PlaySound(TEXT("musica.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
            tocaMusica = false;
        }

        HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO     cursorInfo;
        GetConsoleCursorInfo(out, &cursorInfo);
        cursorInfo.bVisible = false;
        SetConsoleCursorInfo(out, &cursorInfo);
        short int CX=0, CY=0;
        COORD coord;
        coord.X = CX;
        coord.Y = CY;

        // Impressão da matriz jogo, score e tempo decorrido (atualizados em tempo real)
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        cout << endl;
        cout << "                                      Score: " << score << endl;
        cout << "                                      Movimentos: " << movimentos << endl;
        cout << endl;
        for(int i = 0; i < 17; i++){
            for(int j = 0; j < 56; j++){

                for (long long unsigned int k = 0; k < snake.size(); k++){
                    if (k == 0){
                    if (i == snake[k].x && j == snake[k].y){m[i][j] = 5;}
                    }
                    else if (k % 2 == 0){
                        if (i == snake[k].x && j == snake[k].y){m[i][j] = 4;}
                    }
                    else {
                        if(i == snake[k].x && j == snake[k].y){m[i][j] = 2;}
                    }
                }

                switch (m[i][j]){
                    case 0: cout << " "; break;
                    case 1: cout << char(219); break;
                    case 2: cout << char(177); break;
                    case 3: cout << char(5); break;
                    case 4: cout << char(176); break;
                    case 5: cout << char(178); break;
                    case 6: cout << char(6); break;
                    case 7: cout << char(3); break;
                    case 8: cout << char(206); break;
                    case 9: cout << " "; break;
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << "                                  Tempo decorrido: " << setw(2) << setfill('0') << minutos << ":" << setw(2) << setfill('0') << segundos << endl;

        // Geração das frutas no mapa (uma de cada vez, conforme a cobra come)
        srand(time(NULL));
        if (geraFrutas == true){
            bool frutaGerada = false;
            if (configuracaoAtual.modoDeJogo != 3){
                if (configuracaoAtual.fase == 1 && configuracaoAtual.modoDeJogo != 2){
                    do
                    {
                        int vida = (rand() % 10) + 1;
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if(m[xFruta][yFruta] == 0){
                            if (vida == 1 && vidaExtra == false){m[xFruta][yFruta] = 7; vidaExtra = true;}
                            else {m[xFruta][yFruta] = 3;}
                            frutaGerada = true;
                        }
                    }
                    while(frutaGerada == false);
                }

                else if (configuracaoAtual.fase == 1 && configuracaoAtual.modoDeJogo == 2){
                    do
                    {
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if(m[xFruta][yFruta] == 0){m[xFruta][yFruta] = 3; frutaGerada = true;}
                    }
                    while(frutaGerada == false);
                }

                else if (configuracaoAtual.fase == 2 && configuracaoAtual.modoDeJogo != 2){
                    do
                    {
                        int vida = (rand() % 10) + 1;
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if(m[xFruta][yFruta] == 0){
                            if (vida == 1 && vidaExtra == false){m2[xFruta][yFruta] = 7; vidaExtra = true;}
                            else {m2[xFruta][yFruta] = 3;}
                            frutaGerada = true;
                        }
                    }
                    while(frutaGerada == false);
                }   

                else if (configuracaoAtual.fase == 3 && configuracaoAtual.modoDeJogo != 2){
                    do
                    {
                        int vida = (rand() % 10) + 1;
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if(m[xFruta][yFruta] == 0){
                            if (vida == 1 && vidaExtra == false){m3[xFruta][yFruta] = 7; vidaExtra = true;}
                            else {m3[xFruta][yFruta] = 3;}
                            frutaGerada = true;
                        }
                    }
                    while(frutaGerada == false);
                }

                else if (configuracaoAtual.fase == 2 && configuracaoAtual.modoDeJogo == 2){
                    do
                    {
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if((m[xFruta][yFruta] == 0) && (xFruta != 2) && (xFruta != 14) && (xFruta != 7) && (yFruta != 45) && (yFruta != 36) && (yFruta != 53)){m2[xFruta][yFruta] = 3; frutaGerada = true;}
                    }
                    while(frutaGerada == false);
                }
            
                else if (configuracaoAtual.fase == 3 && configuracaoAtual.modoDeJogo == 2){
                    do
                    {
                        xFruta = (rand() % 15) + 1;
                        yFruta = (rand() % 20) + 35;
                        if((m[xFruta][yFruta] == 0) && (xFruta != 2) && (xFruta != 14) && (xFruta != 7) && (yFruta != 36) && (yFruta != 53)){m3[xFruta][yFruta] = 3; frutaGerada = true;}
                    }
                    while(frutaGerada == false);
                }
            }
            
            if (configuracaoAtual.modoDeJogo == 3){
                do
                {   
                    int frutaAleatoria = (rand() % 2) + 1;
                    xFruta = (rand() % 15) + 1;
                    yFruta = (rand() % 20) + 35;
                    if(m[xFruta][yFruta] == 0){
                        if (frutaAleatoria == 1){m[xFruta][yFruta] = 3;}
                        if (frutaAleatoria == 2){m[xFruta][yFruta] = 6;}
                        frutaGerada = true;}
                }
                while(frutaGerada == false);
            }

            geraFrutas = false;
        }

        // Controle da movimentação da cobra (de forma automática, baseado na direção atual)
        if (movimentacao == 0){
            switch (direcaoAtual){
                case 1:
                    cima(snake);
                    if(cima(snake) == false && configuracaoAtual.modoDeJogo == 2){
                        esquerda(snake);
                        if(esquerda(snake) == false){
                            direcaoAtual = 4;
                        }
                        else {direcaoAtual = 3;}
                        break;
                    }

                    if(cima(snake)){
                        movimentos++;
                        // A cobra se desloca uma coordenada à frente (aumenta o tamanho da cobra, adicionando um "bloco de corpo" ao inicio do vetor)
                        head.x = snake[0].x-1;
                        head.y = snake[0].y;
                        snake.insert(snake.begin(), head);
                        if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}
                        // Caso NÃO tenha consumido uma fruta, remove-se o último "bloco de corpo" do vetor, deslocando-a completamente para frente
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                            if (m[snake[0].x][snake[0].y] == 6){
                                m[snake.back().x][snake.back().y] = 0;
                                snake.pop_back();
                                geraFrutas = true;
                                if (score > 0){score -= 10;}
                            }
                            else if (m[snake[0].x][snake[0].y] == 7){
                                vidaExtra = true;
                                geraFrutas = true;
                                score += 5;
                            }
                            else if (m[snake[0].x][snake[0].y] == 8){
                                score = 0;
                                gameLoop = false;
                            }
                        }
                        // Caso tenha consumido uma fruta, mantém-se como está, gera-se uma nova fruta e incrementa-se o score
                        else {incrementaScore(score, configuracaoAtual.dificuldade); geraFrutas = true;}
                    }

                    // Caso a função de movimento não tenha retornado true, significa que tocou ou no próprio corpo ou nas paredes laterais, e portanto morre
                    else{
                        if (vidaExtra == true){
                            vidaExtra = false; 
                            char tecla;
                            while (true) {
                                tecla = _getch();
                                if ((tecla == 'a') || (tecla == 'A') || (tecla == 75)){direcaoAtual = 3; break;}
                                else if ((tecla == 'd') || (tecla == 'D') || (tecla == 77)){direcaoAtual = 4; break;}
                            }
                            break;
                        }
                        gameLoop = false;
                    }
                break;

                case 2:
                    baixo(snake);
                    if(baixo(snake) == false && configuracaoAtual.modoDeJogo == 2){
                        esquerda(snake);
                        if(esquerda(snake) == false){
                            direcaoAtual = 4;
                        }
                        else {direcaoAtual = 3;}
                        break;
                    }

                    if(baixo(snake)){
                        movimentos++;
                        head.x = snake[0].x+1;
                        head.y = snake[0].y;
                        snake.insert(snake.begin(), head);
                        if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                            if (m[snake[0].x][snake[0].y] == 6){
                                m[snake.back().x][snake.back().y] = 0;
                                snake.pop_back();
                                geraFrutas = true;
                                if (score > 0){score -= 10;}
                            }
                            else if (m[snake[0].x][snake[0].y] == 7){
                                vidaExtra = true;
                                geraFrutas = true;
                                score += 5;
                            }
                            else if (m[snake[0].x][snake[0].y] == 8){
                                score = 0;
                                gameLoop = false;
                            }
                        }
                        else {incrementaScore(score, configuracaoAtual.dificuldade); geraFrutas = true;}
                    }

                    else{
                        if (vidaExtra == true){
                            vidaExtra = false; 
                            char tecla;
                            while (true) {
                                tecla = _getch();
                                if ((tecla == 'a') || (tecla == 'A') || (tecla == 75)){direcaoAtual = 3; break;}
                                else if ((tecla == 'd') || (tecla == 'D') || (tecla == 77)){direcaoAtual = 4; break;}
                            }
                            break;
                        }
                        gameLoop = false;
                    }
                break;

                case 3:
                    esquerda(snake);
                    if(esquerda(snake) == false && configuracaoAtual.modoDeJogo == 2){
                        cima(snake);
                        if(cima(snake) == false){
                            direcaoAtual = 2;
                        }
                        else {direcaoAtual = 1;}
                        break;
                    }

                    if(esquerda(snake)){
                        movimentos++;
                        head.x = snake[0].x;
                        head.y = snake[0].y-1;
                        snake.insert(snake.begin(), head);
                        if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                            if (m[snake[0].x][snake[0].y] == 6){
                                m[snake.back().x][snake.back().y] = 0;
                                snake.pop_back();
                                geraFrutas = true;
                                if (score > 0){score -= 10;}
                            }
                            else if (m[snake[0].x][snake[0].y] == 7){
                                vidaExtra = true;
                                geraFrutas = true;
                                score += 5;
                            }
                            else if (m[snake[0].x][snake[0].y] == 8){
                                score = 0;
                                gameLoop = false;
                            }
                        }
                        else {incrementaScore(score, configuracaoAtual.dificuldade); geraFrutas = true;}
                    }

                    else{
                        if (vidaExtra == true){
                            vidaExtra = false; 
                            char tecla;
                            while (true) {
                                tecla = _getch();
                                if ((tecla == 'w') || (tecla == 'W') || (tecla == 72)){direcaoAtual = 1; break;}
                                else if ((tecla == 's') || (tecla == 'S') || (tecla == 80)){direcaoAtual = 2; break;}
                            }
                            break;
                        }
                        gameLoop = false;
                    }
                break;

                case 4:
                    direita(snake);
                    if(direita(snake) == false && configuracaoAtual.modoDeJogo == 2){
                        cima(snake);
                        if(cima(snake) == false){
                            direcaoAtual = 2;
                        }
                        else {direcaoAtual = 1;}
                        break;
                    }

                    if(direita(snake)){
                        movimentos++;
                        head.x = snake[0].x;
                        head.y = snake[0].y+1;
                        snake.insert(snake.begin(), head);
                        if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                        else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                            if (m[snake[0].x][snake[0].y] == 6){
                                m[snake.back().x][snake.back().y] = 0;
                                snake.pop_back();
                                geraFrutas = true;
                                if (score > 0){score -= 10;}
                            }
                            else if (m[snake[0].x][snake[0].y] == 7){
                                vidaExtra = true;
                                geraFrutas = true;
                                score += 5;
                            }
                            else if (m[snake[0].x][snake[0].y] == 8){
                                score = 0;
                                gameLoop = false;
                            }
                        }
                        else {incrementaScore(score, configuracaoAtual.dificuldade); geraFrutas = true;}
                    }

                    else{
                        if (vidaExtra == true){
                            vidaExtra = false; 
                            char tecla;
                            while (true) {
                                tecla = _getch();
                                if ((tecla == 'w') || (tecla == 'W') || (tecla == 72)){direcaoAtual = 1; break;}
                                else if ((tecla == 's') || (tecla == 'S') || (tecla == 80)){direcaoAtual = 2; break;}
                            }
                            break;
                        }
                        gameLoop = false;
                    }
                break;
            }

            if ((direcaoAtual == 1 || direcaoAtual == 2) && configuracaoAtual.modoDeJogo == 2){

                if (snake[0].x == xFruta){

                    if (snake[0].y > yFruta){direcaoAtual = 3;
                        if (esquerda(snake) == false){
                            if(cima(snake) == true){direcaoAtual = 1;}
                            else{direcaoAtual = 2;}
                        }
                    }
                    if (snake[0].y < yFruta){direcaoAtual = 4;
                        if (direita(snake) == false){
                            if(cima(snake) == true){direcaoAtual = 1;}
                            else{direcaoAtual = 2;}
                        }
                    }
                }
            }

            if ((direcaoAtual == 3 || direcaoAtual == 4) && configuracaoAtual.modoDeJogo == 2){

                if (snake[0].y == yFruta){

                    if (snake[0].x > xFruta){direcaoAtual = 1;
                        if (cima(snake) == false){
                            if(esquerda(snake) == true){direcaoAtual = 3;}
                            else{direcaoAtual = 4;}
                        }
                    }
                    if (snake[0].x < xFruta){direcaoAtual = 2;
                        if (baixo(snake) == false){
                            if(esquerda(snake) == true){direcaoAtual = 3;}
                            else{direcaoAtual = 4;}
                        }
                    }
                }
            }

            if (direcaoAtual == 1 && configuracaoAtual.modoDeJogo == 2){

                if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}

                if ((snake[0].x != snake[1].x) && (snake[1].x == snake[2].x) && acompanhaCorpo == true){
                    if ((54 - snake[0].y) >= (snake[0].y - 35)){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                    acompanhaCorpo = false;
                }

                if (cima(snake) == false){
                    if ((54 - snake[0].y) >= (snake[0].y - 35)){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                }

                if (((m[(snake[0].x)-2][snake[0].y] == 4) || (m[(snake[0].x)-2][snake[0].y] == 2)) && ((m[snake[0].x][(snake[0].y)+1] != 4) && (m[snake[0].x][(snake[0].y)+1] != 2) && (m[snake[0].x][(snake[0].y)-1] != 4) && (m[snake[0].x][(snake[0].y)-1] != 2))){
                    for (int i = snake[0].y; i <= 54; i++){
                        if(m[snake[0].x][i] == 4 || m[snake[0].x][i] == 2){vireEsquerda = true;}
                    }
                    if (vireEsquerda){direcaoAtual = 3; vireEsquerda = false;}
                    else {direcaoAtual = 4;}
                    acompanhaCorpo = true;
                }

                if ((cima(snake) == false) && ((m[snake[0].x][(snake[0].y)+1] == 4) || (m[snake[0].x][(snake[0].y)+1] == 2) || (m[snake[0].x][(snake[0].y)-1] == 4) || (m[snake[0].x][(snake[0].y)-1] == 2))){
                    if ((snake[0].y)+1 == 0 || (snake[0].y)+1 == 3){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                }
            }

            if (direcaoAtual == 2 && configuracaoAtual.modoDeJogo == 2){

                if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}

                if ((snake[0].x != snake[1].x) && (snake[1].x == snake[2].x) && acompanhaCorpo == true){
                    if ((54 - snake[0].y) >= (snake[0].y - 35)){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                    acompanhaCorpo = false;
                }

                if (baixo(snake) == false){
                    if ((54 - snake[0].y) >= (snake[0].y - 35)){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                }

                if (((m[(snake[0].x)+2][snake[0].y] == 4) || (m[(snake[0].x)+2][snake[0].y] == 2)) && ((m[snake[0].x][(snake[0].y)+1] != 4) && (m[snake[0].x][(snake[0].y)+1] != 2) && (m[snake[0].x][(snake[0].y)-1] != 4) && (m[snake[0].x][(snake[0].y)-1] != 2))){
                    for (int i = snake[0].y; i <= 54; i++){
                        if(m[snake[0].x][i] == 4 || m[snake[0].x][i] == 2){vireEsquerda = true;}
                    }
                    if (vireEsquerda){direcaoAtual = 3; vireEsquerda = false;}
                    else {direcaoAtual = 4;}
                    acompanhaCorpo = true;
                }

                if ((baixo(snake) == false) && ((m[snake[0].x][(snake[0].y)+1] == 4) || (m[snake[0].x][(snake[0].y)+1] == 2) || (m[snake[0].x][(snake[0].y)-1] == 4) || (m[snake[0].x][(snake[0].y)-1] == 2))){
                    if ((snake[0].y)+1 == 0 || (snake[0].y)+1 == 3){direcaoAtual = 4;}
                    else {direcaoAtual = 3;}
                }
            }

            if (direcaoAtual == 3 && configuracaoAtual.modoDeJogo == 2){

                if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}

                if ((snake[0].y != snake[1].y) && (snake[1].y == snake[2].y) && acompanhaCorpo == true){
                    if ((15 - snake[0].x) >= (snake[0].x - 1)){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                    acompanhaCorpo = false;
                }

                if (esquerda(snake) == false){
                    if ((15 - snake[0].x) >= (snake[0].x - 1)){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                }

                if (((m[snake[0].x][(snake[0].y)-2] == 4) || (m[snake[0].x][(snake[0].y)-2] == 2)) && ((m[(snake[0].x)+1][snake[0].y] != 4) && (m[(snake[0].x)+1][snake[0].y] != 2) && (m[(snake[0].x)-1][snake[0].y] != 4) && (m[(snake[0].x)-1][snake[0].y] != 2))){
                    for (int i = snake[0].x; i >= 1; i--){
                        if(m[i][snake[0].y] == 4 || m[i][snake[0].y] == 2){vireBaixo = true;}
                    }
                    if (vireBaixo){direcaoAtual = 2; vireBaixo = false;}
                    else {direcaoAtual = 1;}
                    acompanhaCorpo = true;
                }

                if ((esquerda(snake) == false) && ((m[(snake[0].x)+1][snake[0].y] == 4) || (m[(snake[0].x)+1][snake[0].y] == 2) || (m[(snake[0].x)+1][snake[0].y] == 4) || (m[(snake[0].x)+1][snake[0].y] == 2))){
                    if ((snake[0].x)+1 == 0 || (snake[0].x)+1 == 3){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                }
            }

            if (direcaoAtual == 4 && configuracaoAtual.modoDeJogo == 2){

                if (configuracaoAtual.fase == 1){m[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 2){m2[snake.back().x][snake.back().y] = 0;}
                else if (configuracaoAtual.fase == 3){m3[snake.back().x][snake.back().y] = 0;}

                if ((snake[0].y != snake[1].y) && (snake[1].y == snake[2].y) && acompanhaCorpo == true){
                    if ((15 - snake[0].x) >= (snake[0].x - 1)){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                    acompanhaCorpo = false;
                }

                if (direita(snake) == false){
                    if ((15 - snake[0].x) >= (snake[0].x - 1)){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                }

                if (((m[snake[0].x][(snake[0].y)+2] == 4) || (m[snake[0].x][(snake[0].y)+2] == 2)) && ((m[(snake[0].x)+1][snake[0].y] != 4) && (m[(snake[0].x)+1][snake[0].y] != 2) && (m[(snake[0].x)-1][snake[0].y] != 4) && (m[(snake[0].x)-1][snake[0].y] != 2))){
                    for (int i = snake[0].x; i >= 1; i--){
                        if(m[i][snake[0].y] == 4 || m[i][snake[0].y] == 2){vireBaixo = true;}
                    }
                    if (vireBaixo){direcaoAtual = 2; vireBaixo = false;}
                    else {direcaoAtual = 1;}
                    acompanhaCorpo = true;
                }

                if ((direita(snake) == false) && ((m[(snake[0].x)+1][snake[0].y] == 4) || (m[(snake[0].x)+1][snake[0].y] == 2) || (m[(snake[0].x)+1][snake[0].y] == 4) || (m[(snake[0].x)+1][snake[0].y] == 2))){
                    if ((snake[0].x)+1 == 0 || (snake[0].x)+1 == 3){direcaoAtual = 2;}
                    else {direcaoAtual = 1;}
                }
            }

            // Aumento da velocidade da cobra conforme o número de frutas consumidas aumenta
            if (configuracaoAtual.dificuldade == 1){
                if (score >= 800){movimentacao = 3;}
                else if (score >= 500){movimentacao = 4;}
                else if (score >= 300){movimentacao = 5;}
                else if (score >= 100){movimentacao = 6;}
                else if (score >= 50){movimentacao = 7;}
                else if (score >= 0){movimentacao = 8;}
            }

            if (configuracaoAtual.dificuldade == 2){
                if (score >= 500){movimentacao = 3;}
                else if (score >= 300){movimentacao = 4;}
                else if (score >= 100){movimentacao = 5;}
                else if (score >= 0){movimentacao = 6;}
            }

            if (configuracaoAtual.dificuldade == 3){movimentacao = 3;}
        }

        // Controle de movimentação da cobra pelo jogador (não é possível andar em direções opostas)
        if (_kbhit() && timerMov == 0 && configuracaoAtual.modoDeJogo != 2){
            tecla = _getch();
            switch(tecla){
                case 'w': case 'W': case 72:
                    if (direcaoAtual != 2){direcaoAtual = 1; timerMov = 6; if(score >= 800){timerMov = 3;}}
                break;
                case 's': case 'S': case 80:
                    if (direcaoAtual != 1){direcaoAtual = 2; timerMov = 6; if(score >= 800){timerMov = 3;}}
                break;
                case 'a': case 'A': case 75:
                    if (direcaoAtual != 4){direcaoAtual = 3; timerMov = 6; if(score >= 800){timerMov = 3;}}
                break;
                case 'd': case 'D': case 77:
                    if (direcaoAtual != 3){direcaoAtual = 4; timerMov = 6; if(score >= 800){timerMov = 3;}}
                break;
            }
        }
        // Timer mov gera um delay imperceptível que impede a morte da cobra caso o usuário movimente-se muito rápido

        if (timerMov > 0){timerMov--;}
        movimentacao--;
        morteSubita++;
    }

    // Fim do game loop, pausando o cronômetro e registrando o tempo decorrido
    auto end = chrono::steady_clock::now();
    auto duracao = chrono::duration_cast<chrono::seconds>(end - start).count();
    duracaoMinutos = duracao / 60;
    duracaoSegundos = duracao % 60;

    PlaySound(NULL, NULL, 0);

    // Caso o usuário tenha vencido
    if (configuracaoAtual.fase == 3 && score >= 1000){
        PlaySound(TEXT("victory.wav"), NULL, SND_FILENAME | SND_ASYNC);
        vitoria();
        atexit(criarArquivo);
        return 0;
    }

    // Caso o usuário tenha perdido
    PlaySound(TEXT("game_over.wav"), NULL, SND_FILENAME | SND_ASYNC);
    inicioFim(score);
    atexit(criarArquivo);
    return 0;
}
