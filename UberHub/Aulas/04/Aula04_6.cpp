#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;


int main(){
   
    string mes[]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    int m;
    cout << "Qual mês de 1 a 12, você deseja saber?";
    while(1){
    cin >> m;
    if (m>0 && m<=12){
        cout << "Ok, o mês é " << mes[m-1]<< "\n\n";
        cout << "Qual mês de 1 a 12, você deseja saber?";
    }else{
        cout<<"Indevido!!!!!!!"<<endl;
        break;
    }
    }

}