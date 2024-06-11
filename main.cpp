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

int m[18][56] = {
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
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

int movimentacao = 0;
int direcaoAtual = 4;
int score = 0;
int duracaoMinutos;
int duracaoSegundos;
string nome;
bool geraFrutas = true;
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

void incrementaScore(int &score){
    score += 10;
}

void vitoria(int score = 1000){
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
    getch();
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
        cout << "                                      Insira seu nome: " << endl;
        cout << "                                          ";
        cin.ignore();
        getline(cin, nome);
        if (nome.empty()) {nome = "Anonimo";}
        system("cls");
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
        getch();
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

    // Vetor que controla a cobra e seu tamanho
    Snake head;
    vector<Snake> snake;
    for (int i = 45; i > 42; i--){
        head.x = 14;
        head.y = i;
        snake.push_back(head);
    }

    // Impressão do menu inicial
    inicioFim(vetorRankings);

    // Registro do cronômetro
    auto start = chrono::steady_clock::now();

    while (gameLoop){
        // Registro do cronômetro
        auto now = chrono::steady_clock::now();
        auto duracao = chrono::duration_cast<chrono::seconds>(now - start).count();

        int minutos = duracao / 60;
        int segundos = duracao % 60;

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
        cout << "                                        Score: " << score << endl;
        cout << endl;
        for(int i = 0; i < 18; i++){
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
                    case 3: cout << char(254); break;
                    case 4: cout << char(176); break;
                    case 5: cout << char(178); break;
                    case 9: cout << " "; break;
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << "                                  Tempo decorrido: " << setw(2) << setfill('0') << minutos << ":" << setw(2) << setfill('0') << segundos << endl;

        // Geração das frutas no mapa (uma de cada vez, conforme a cobra come)
        srand(time(NULL));
        if (geraFrutas){
            bool frutaGerada = false;
            do
            {
                int xFruta = (rand() % 16) + 1;
                int yFruta = (rand() % 19) + 37;
                if(m[xFruta][yFruta] == 0){m[xFruta][yFruta] = 3; frutaGerada = true;}
            }
            while(frutaGerada == false);
            geraFrutas = false;
        }

        // Controle da movimentação da cobra (de forma automática, baseado na direção atual)
        if (movimentacao == 0){
            switch (direcaoAtual){
                case 1:
                    if(cima(snake)){
                        // A cobra se desloca uma coordenada à frente (aumenta o tamanho da cobra, adicionando um "bloco de corpo" ao inicio do vetor)
                        head.x = snake[0].x-1;
                        head.y = snake[0].y;
                        snake.insert(snake.begin(), head);
                        m[snake.back().x][snake.back().y] = 0;
                        // Caso NÃO tenha consumido uma fruta, remove-se o último "bloco de corpo" do vetor, deslocando-a completamente para frente
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                        }
                        // Caso tenha consumido uma fruta, mantém-se como está, gera-se uma nova fruta e incrementa-se o score
                        else {incrementaScore(score); geraFrutas = true;}
                    }

                    // Caso a função de movimento não tenha retornado true, significa que tocou ou no próprio corpo ou nas paredes laterais, e portanto morre
                    else{gameLoop = false;}
                break;

                case 2:
                    if(baixo(snake)){
                        head.x = snake[0].x+1;
                        head.y = snake[0].y;
                        snake.insert(snake.begin(), head);
                        m[snake.back().x][snake.back().y] = 0;
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                        }
                        else {incrementaScore(score); geraFrutas = true;}
                    }

                    else{gameLoop = false;}
                break;

                case 3:
                    if(esquerda(snake)){
                        head.x = snake[0].x;
                        head.y = snake[0].y-1;
                        snake.insert(snake.begin(), head);
                        m[snake.back().x][snake.back().y] = 0;
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                        }
                        else {incrementaScore(score); geraFrutas = true;}
                    }

                    else{gameLoop = false;}
                break;

                case 4:
                    if(direita(snake)){
                        head.x = snake[0].x;
                        head.y = snake[0].y+1;
                        snake.insert(snake.begin(), head);
                        m[snake.back().x][snake.back().y] = 0;
                        if (m[snake[0].x][snake[0].y] != 3){
                            snake.pop_back();
                        }
                        else {incrementaScore(score); geraFrutas = true;}
                    }

                    else{gameLoop = false;}
                break;
            }

            // Aumento da velocidade da cobra conforme o número de frutas consumidas aumenta
            if (score >= 800){movimentacao = 3;}
            else if (score >= 500){movimentacao = 4;}
            else if (score >= 300){movimentacao = 5;}
            else if (score >= 100){movimentacao = 6;}
            else if (score >= 50){movimentacao = 7;}
            else if (score >= 0){movimentacao = 8;}
        }

        // Controle de movimentação da cobra pelo jogador (não é possível andar em direções opostas)
        if (_kbhit() && timerMov == 0){
            tecla = getch();
            switch(tecla){
                case 'w': case 'W': case 72:
                    if (direcaoAtual != 2){direcaoAtual = 1; timerMov = 5; if(score >= 800){timerMov = 4;}}
                break;
                case 's': case 'S': case 80:
                    if (direcaoAtual != 1){direcaoAtual = 2; timerMov = 5; if(score >= 800){timerMov = 4;}}
                break;
                case 'a': case 'A': case 75:
                    if (direcaoAtual != 4){direcaoAtual = 3; timerMov = 5; if(score >= 800){timerMov = 4;}}
                break;
                case 'd': case 'D': case 77:
                    if (direcaoAtual != 3){direcaoAtual = 4; timerMov = 5; if(score >= 800){timerMov = 4;}}
                break;
            }
        }
        // Timer mov gera um delay imperceptível que impede a morte da cobra caso o usuário movimente-se muito rápido
        if (timerMov > 0){timerMov--;}
        movimentacao -= 1;
        if (score == 1000){gameLoop = false;}
    }

    // Fim do game loop, pausando o cronômetro e registrando o tempo decorrido
    auto end = chrono::steady_clock::now();
    auto duracao = chrono::duration_cast<chrono::seconds>(end - start).count();
    duracaoMinutos = duracao / 60;
    duracaoSegundos = duracao % 60;

    PlaySound(NULL, NULL, 0);
    
    // Caso o usuário tenha vencido
    if (score == 1000){
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
