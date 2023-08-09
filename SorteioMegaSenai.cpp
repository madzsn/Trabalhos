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