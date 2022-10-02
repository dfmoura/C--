#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    double pesoA = 2, a, pesoB = 3, b, pesoC = 5, c, media; 
    cin >> a, cin >> b, cin >> c;
    media = ((pesoA * a)+(pesoB * b)+(pesoC * c))/(pesoA + pesoB + pesoC);
    cout << setprecision(1) << fixed;
    cout << "MEDIA = " << media << endl;
}