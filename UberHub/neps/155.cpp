/*
Múltiplos de 2, 3 e 4
Bino recebeu NN inteiros de presente. Ele gostaria de saber quantos múltiplos 
de 2, 3 e 4 ele recebeu.

Entrada
A entrada consiste de múltiplas linhas. A primeira linha consiste de 
um inteiro NN, indicando quantos números Bino recebeu de presente. 
Cada uma das próximas NN contém um inteiro representando um inteiro que Bino recebeu.

Saída
A saída consiste de três linhas. A primeira linha contém a quantidade de 
números múltiplos de 2 que Bino recebeu. A segunda linha contém a quantidade 
de números múltiplos de 3 que Bino recebeu. A terceira linha contém a quantidade 
de números múltiplos de 4 que Bino recebeu.

Restrições
0≤N≤100

1) Ler um numero x que represente o total de grupo de inteiros.
2) Com base neste x, ler o total de itens dentro de cada grupo x.
3) Dentro de cada leitura de item do grupo x, criar uma condição que verifique se o número
é multiplo de 2, 3 e 4, de modo que respectivamente seja contado quantos são os multiplo de 
2, 3 e 4, ou seja, um if dentro de um for.
4) Imprimir a listagem da contagem.
*/

#include <iostream>
using namespace std;

int main() {

    int x,y,i,soma,soma1,soma2;
    cin >>x;
    soma = 0;
    soma1 = 0;
    soma2 = 0;
    for(int i = 1; i <= x; i++){
        cin >>y;
            if(y%2==0){
                soma++;
            }if(y%3==0){
                soma1++;
            }if(y%4==0){
                soma2++;
            }                
    }
    cout<<soma<<endl;
    cout<<soma1<<endl;
    cout<<soma2<<endl;
}


/*
    int i = 1;
    while (i <= 100){
        if(i%2 ==0){
            cout<<i<<endl;
        }   
    i++;
    }
*/