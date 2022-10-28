#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    double salario, vendas, perComissao = 0.15, total;
    cin >> salario >> vendas;
    total = (perComissao * vendas) + salario;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
}