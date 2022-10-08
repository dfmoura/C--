#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int opcao, quantidade;
    float resultado;

    cin >> opcao; 
    cin>> quantidade;

    if(opcao == 1){
        resultado = 4.00 * quantidade;
    }else if(opcao ==2){
        resultado = 4.50 * quantidade;
    }else if(opcao ==3){
        resultado = 5.00 * quantidade;
    }else if(opcao ==4){
        resultado = 2.00 * quantidade;
    }else if(opcao ==5){
        resultado = 1.50 * quantidade;
    }
    cout << "Total: R$ " << fixed << setprecision(2)<< resultado<< endl;
}