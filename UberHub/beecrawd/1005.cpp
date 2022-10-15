#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    double pesoA = 3.5, a, pesoB = 7.5, b; 
    float media;
    cin >> a;
    cin >> b;
    media = ((pesoA * a)+(pesoB * b))/(pesoA + pesoB);
    cout << setprecision(5) << fixed;
    cout << "MEDIA = " << media << endl;
}