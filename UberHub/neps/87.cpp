/*
Flíper
Flíper é um tipo de jogo onde uma bolinha de metal cai por um labirinto 
de caminhos até chegar na parte de baixo do labirinto. A quantidade de 
pontos que o jogador ganha depende do caminho que a bolinha seguir. 
O jogador pode controlar o percurso da bolinha mudando a posição de 
algumas portinhas do labirinto. Cada portinha pode estar na posição 0, 
que significa virada para a esquerda, ou na posição 1 que quer dizer 
virada para a direita. Considere o flíper da figura abaixo, que tem 
duas portinhas. A portinha PP está na posição 1 e a portinha RR, na 
posição 0. Desse jeito, a bolinha vai cair pelo caminho B.


Você deve escrever um programa que, dadas as posições das 
portinhas PP e RR, neste flíper da figura, diga por qual dos três 
caminhos, A, B ou C, a bolinha vai cair!

Entrada
A entrada é composta por apenas uma linha contendo dois números 
PP e RR, indicando as posições das duas portinhas do flíper da figura.

Saída
A saída do seu programa deve ser também apenas uma linha, contendo 
uma letra maiúscula que indica o caminho por onde a bolinha vai 
cair: 'A', 'B' ou 'C'.

Restrições
O número PP pode ser 0 ou 1. O número RR pode ser 0 ou 1.
*/


#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B; 
    cin >> A >> B;

    // Seu código vai aqui
    if (A+B==0) {
        cout<<"C"<<endl;
        } else if (A+B==1) {
            cout<<"B"<<endl;
            } else {resp="A";
            } 
}