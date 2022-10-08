#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int opcao, quantidade;
    double resultado;
    string foraMenu;
    cout << "Informar item do menu e quantidade "<< endl;
    cout << "1 - Cahorro Quente"<< endl;
    cout << "2 - X-Salada"<< endl;
    cout << "3 - X-Bacon"<< endl;
    cout << "4 - Torrada Simples"<< endl;
    cout << "5 - Refrigerante"<< endl;
    cin >> opcao; 
    cin>> quantidade;

    if(opcao == 1){
        resultado = 4.00 * quantidade;
    }else if(opcao ==2){
        resultado = 4.5 * quantidade;
    }else if(opcao ==3){
        resultado = 5.0 * quantidade;
    }else if(opcao ==4){
        resultado = 2.0 * quantidade;
    }else if(opcao ==5){
        resultado = 1.5 * quantidade;
    }
    cout << "Total: R$ " << fixed << setprecision(2)<< resultado<< endl;
}