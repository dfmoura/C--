#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    float A,B,C;
    string z;
    cin >> A >> B >> C;
    
    if(A < B+C && B < A+C && C < B+A ){
        cout << "Perimetro = " << fixed << setprecision(1) << A + B + C<< endl;
    }else {
        cout << "Area = " << fixed << setprecision(1) << (C*(A+B))/2<< endl;
    }
}