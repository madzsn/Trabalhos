#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gerarNumeroAleatorio(int seed) {
// Gere um número "pseudo-aleatório" usando aritmética modular
int numero = (seed * 13 + 7) % 60 + 1;

return numero;
}


int main () {

    int contador = 6;
    while (contador < 61) {
        std::cout << contador << std::endl;
        contador++;
    }


    setlocale(LC_ALL, "portuguese");
   
     // Gera um número secreto entre 1 e 100
    int numeroSecreto = rand() % 60 + 1;
    int tentativa, tentativas = 0;
    
    // Inicializa o gerador de números aleatórios
    srand(static_cast<unsigned int>(time(0)));

    
    for (int i = 0; i < 60; i++) {
       cout << numeroSecreto;
    }



    cout << "Bem vindo ao Mega Senai!" << endl;

    do {
    cout << "Digite um número de 1 a 60: ";
    cin >> tentativa;
    tentativas++;
    
    } while (tentativa != numeroSecreto);


return 0;

}



// outro

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    
    cout << "Bem-vindo ao Mega Senai!" << endl;
    
    int sorteios = 0;
    bool acertou = false;

    do {
        vector<int> numerosSorteados;
        for (int i = 0; i < 6; i++) {
            numerosSorteados.push_back(rand() % 60 + 1);
        }
        sort(numerosSorteados.begin(), numerosSorteados.end());

        cout << "Escolha 6 números distintos entre 1 e 60:" << endl;
        vector<int> numerosEscolhidos;
        for (int i = 0; i < 6; i++) {
            int numero;
            cin >> numero;
            numerosEscolhidos.push_back(numero);
        }
        sort(numerosEscolhidos.begin(), numerosEscolhidos.end());

        int acertos = 0;
        for (int i = 0; i < 6; i++) {
            if (binary_search(numerosSorteados.begin(), numerosSorteados.end(), numerosEscolhidos[i])) {
                acertos++;
            }
        }

        cout << "Você acertou " << acertos << " números." << endl;
        
        if (acertos == 6) {
            acertou = true;
            cout << "Parabéns! Você acertou todos os números em " << sorteios + 1 << " sorteios." << endl;
        } else {
            cout << "Tente novamente." << endl;
            sorteios++;
        }

    } while (!acertou);

    cout << "Obrigado por jogar o Mega Senai!" << endl;

    return 0;
}
