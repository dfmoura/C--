#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    int idFunc , horasTrab; 
    float valorPHora, salario;
    cin >> idFunc, cin >> horasTrab, cin >> valorPHora;
    salario = horasTrab * valorPHora;
    cout << setprecision(2) << fixed;
    cout << "NUMBER = " << idFunc << endl;
    cout << "SALARY = U$ " << salario << endl;
}