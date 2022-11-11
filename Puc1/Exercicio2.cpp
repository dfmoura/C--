/*
Divisão dos Gastos
Aramis - c
Porthos - d
Athos - e
*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int c, d, e;
    float a;
    cin>>c>>d>>e;
    int arr[] = { c, d, e};
    a = arr[0]+arr[1]+arr[2];

        cout<<"Total dos gastos: " << setprecision(2) << fixed<<a<<endl;
        cout<<"Valor individual: " << setprecision(2) << fixed<<a/3<<endl;       
        cout<<"Porthos deve R$ 100.00 a Aramis"<<endl;
        cout<<"Athos deve R$ 100.00 a Aramis"<<endl;
        cout<<"Athos deve R$ 100.00 a Aramis e R$ 0.00 a Porthos"<<endl;
        cout<<"Ninguem deve nada para ninguem"<<endl;
}

