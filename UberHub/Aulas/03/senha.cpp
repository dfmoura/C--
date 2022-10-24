#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,x=1;
    cin>>i;
    while (i != 1234){
        cout << "Tentativa: "<<x<< ". Senha incorreta, tente novamente!!! " << endl;
        x++;
        cin>> i;
    }
    cout<<"Senha correta!"<<endl;

}