#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    float A,B,C,D,E,F;
    cin >> A >> B >> C >> D >> E >> F;
    int soma;
    
        if(A>0){
            soma = 1;
        }if(B>0){
            soma += 1;
        }if(C>0){
            soma += 1;
        }if(D>0){
            soma += 1;
        }if(E>0){
            soma += 1;
        }if(F>0){
            soma += 1;
        }
        cout<< soma << " valores positivos" << endl;

}