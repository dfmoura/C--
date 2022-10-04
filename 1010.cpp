#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    int idProduct1, qttProduct1, idProduct2, qttProduct2;
    float pricePerUnit1, pricePerUnit2, total;
    cin >> idProduct1, cin >> qttProduct1, cin >> pricePerUnit1;
    cin >> idProduct2, cin >> qttProduct2, cin >> pricePerUnit2;
    total = (qttProduct1*pricePerUnit1)+ (qttProduct2*pricePerUnit2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
}