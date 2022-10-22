/*
Dez Valores
Bino está tentando contar até 100000. Porém quando ele estava no número XX, 
ele não se lembrou dos próximos números.
Para ajudar Bino, imprima os próximos 10 valores inteiros maiores que XX.

Entrada
A entrada consiste de uma linha contendo um inteiro XX.

Saída
A saída consiste de uma linha contendo os 10 próximos números maiores 
que XX separados por um espaço.

Restrições
−100000≤X≤1000000

Exemplos de Entrada	
10
22

Exemplos de Saída
11 12 13 14 15 16 17 18 19 20
23 24 25 26 27 28 29 30 31 32

*/


#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    x = x+1;

    if ((x>=-100000)&&(x<=1000000)){        
    cout <<x<<" "<<x+1<<" "<<x+2<<" "<<x+3<<" "<<x+4<<" "<<x+5<<" "<<x+6<<" "<<x+7<<" "<<x+8<<" "<<x+9<<endl;
    }    
}