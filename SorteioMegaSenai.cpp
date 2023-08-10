//Alunas: Elen Vitória, Leticia, Maria Eduarda
#include <iostream>    
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    srand(time(0));
        int vetorSize = 6; // Define o tamanho do vetor
        int acertos = 0;

            vector<int> numerosSorteados(vetorSize);

            for (int i = 0; i < 6; i++) {
        numerosSorteados[i] = rand() % 60 + 1;  // Gera número entre 1 e 60 aleatoriamente
        numerosSorteados[i];
        } 
       cout << "Bem-vindo ao Mega Senai!" << endl; // Introdução ao jogo
     
    
    int sorteios = 0;
    bool acertou = false;

    do {
        for (int i = 0; i < 6; i++) {
        } 
        
    for (int i = 0; i < 6; i++) {
         numerosSorteados[i];
        } 
        cout << "Escolha 6 números distintos entre 1 e 60:" << endl;
        vector<int> numerosEscolhidos;
        for (int i = 0; i < 6; i++) {
            
            int numero;
            cin >> numero;
            numerosEscolhidos.push_back(numero);
        

         if ( numero >= 61) {
        cout << "O número digitado é maior que 60, tente novamente. " << endl;
        break;
         
          } else if ( numero <= 0) {
        cout << "O número digitado é menor que 1, tente novamente. " << endl;
        break;
        }

        

        sort(numerosEscolhidos.begin(), numerosEscolhidos.end());

        for (int i = 0; i < 6; i++) {
            if (binary_search(numerosSorteados.begin(), numerosSorteados.end(), numerosEscolhidos[i])) {
                acertos++;

                
            }
            
        }
        
        
        if (acertos == 6) {
            acertou = true;
            cout << "Parabéns! Você acertou todos os números em " << sorteios + 1 << " sorteios." << endl;

            
        } 
         
    } 
        for (int i = 0; i < 6; i++) {
         cout<<numerosSorteados[i]<<" " <<endl;
                  cout<<numerosSorteados[i]<<" " <<endl;

        } 
    cout << "Você acertou " << acertos << " números." << endl;
 char confirmacao;
        std::cout << "\nVocê deseja continuar jogando? (S/N) ";
        std::cin >> confirmacao;

       if (toupper(confirmacao) == 'S') {
            
        } else {
            std::cout << "Obrigado por jogar. " << std::endl;
        } break;
    }
       while (!acertou);
      
    
    return 0;

        }            


