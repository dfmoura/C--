#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int ddd;
    string cidade;
    cin >> ddd; 


    if(ddd == 61){
        cidade = "Brasilia";
    }else if(ddd == 71){
        cidade = "Salvador";
    }else if(ddd ==11){
        cidade = "Sao Paulo";
    }else if(ddd ==21){
        cidade = "Rio de Janeiro";
    }else if(ddd ==32){
        cidade = "Juiz de Fora";
    }else if(ddd ==19){
        cidade = "Campinas";
    }else if(ddd ==27){
        cidade = "Vitoria";
    }else if(ddd ==31){
        cidade = "Belo Horizonte";
    }else{
        cidade = "DDD nao cadastrado";
    }
    cout << cidade << endl;
}