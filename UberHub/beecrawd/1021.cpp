#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double N;
    int moedas; //saque disponibilizado
    cin >> N;
    moedas = (N - int(N))*100;
    cout << "NOTAS:" << endl;
    cout << int (N)/100 << " nota(s) de R$ 100.00"<< endl;
    N = int (N)%100;
    cout << int (N)/50 << " nota(s) de R$ 50.00"<< endl;
    N = int(N)%50;
    cout << int(N)/20 << " nota(s) de R$ 20.00"<< endl;
    N = int(N)%20;
    cout << int(N)/10 << " nota(s) de R$ 10.00"<< endl;
    N = int(N)%10;
    cout << int(N)/5 << " nota(s) de R$ 5.00"<< endl;
    N = int(N)%5;   
    cout << int(N)/2 << " nota(s) de R$ 2.00"<< endl;
    N = int(N)%2;
    cout << "MOEDAS:" << endl;
    cout << int(N) << " moeda(s) de R$ 1.00"<< endl;
    cout << std::fixed<< std::setprecision(2)<< int(moedas)/50<< " moeda(s) de R$ 0.50"<< endl;
    moedas = int(moedas)%50;
    cout << std::fixed<< std::setprecision(2)<< int(moedas)/25<< " moeda(s) de R$ 0.25"<< endl;
    moedas = int(moedas)%25;
    cout << std::fixed<< std::setprecision(2)<< int(moedas)/10<< " moeda(s) de R$ 0.10"<< endl;
    moedas = int(moedas)%10;
    cout << std::fixed<< std::setprecision(2)<< int(moedas)/5<< " moeda(s) de R$ 0.05"<< endl;
    moedas = int(moedas)%5;
    cout << std::fixed<< std::setprecision(2)<< int(moedas)/1<< " moeda(s) de R$ 0.01"<< endl;
    moedas = int(moedas)%1;
}