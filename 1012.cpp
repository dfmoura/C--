#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    double base, lado, altura, pi=3.14159, triangulo, circulo, trapezio, quadrado, retangulo;
    cin >> base, cin >> lado, cin >> altura;
    triangulo = (base*altura)/2;
    circulo = pi * (pow(altura,2));
    trapezio = ((base+lado)*altura)/2;
    quadrado = pow(lado,2);
    retangulo = base*lado;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;
}