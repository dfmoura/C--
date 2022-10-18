#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0; // quantidade de numeros que eu vou somar
    int soma = 0;
    
    while (i < 11)
    {
        int x; //variavel local so funciona aqui dentro da estrutura while
        cin >> x;
        if(x > 0){
            soma += x;
            i++; //i = i + 1; Eu posso incrementa-lo em qualquer lugar
        }
    }
    cout << "A soma eh: " << soma <<endl;
}