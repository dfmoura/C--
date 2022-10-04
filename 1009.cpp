#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    string vendedor;
    double salario, vendas, perComissao = 0.15, total;
    cin >> vendedor, cin >> salario, cin >> vendas;
    total = (perComissao * vendas) + salario;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
}