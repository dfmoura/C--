#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int x,y;
    double tLitros, kmPlt=12;
    cin >> x >> y;
    tLitros = ((x * y)/kmPlt);
    cout << std::fixed<< std::setprecision(3) << tLitros << endl;
}