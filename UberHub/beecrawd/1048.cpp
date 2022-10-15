#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    float salario, novo_salario;
    cin >> salario;

    if ((salario> 0) && (salario <= 400)){
        novo_salario = (salario*0.15)+salario;
    }else if ((salario> 400) && (salario <= 800)){
        novo_salario = (salario*0.12)+salario;
    }else if ((salario> 800) && (salario <= 1200)){
        novo_salario = (salario*0.10)+salario;
    }else if ((salario> 1200) && (salario <= 2000)){
        novo_salario = (salario*0.07)+salario;
    }else if ((salario> 2000)){
        novo_salario = (salario*0.04)+salario;
    }
    
cout << "Novo salario: "<< fixed << setprecision(2) << novo_salario <<endl;
cout << "Reajuste ganho: "<< fixed << setprecision(2) << novo_salario - salario <<endl;
cout << "Em percentual: "<< setprecision(0) << ((novo_salario/salario)-1)*100<<" %" <<endl;
}