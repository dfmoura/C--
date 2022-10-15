#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    float x;
    string y;
    cin >> x; 


    if(0 <= x && x <= 25.0000){
        y = "Intervalo [0,25]";
    } else if(25.00001 <= x && x <= 50.0000000){
        y = "Intervalo (25,50]";
    } else if(50.00000001 <= x && x <= 75.000000000){
        y = "Intervalo (50,75]";
    } else if(75.0000000001 <= x && x <= 100.000000000000){
        y = "Intervalo (75,100]";
    } else {
        y = "Fora de intervalo";
    }

    cout << y << endl;

}