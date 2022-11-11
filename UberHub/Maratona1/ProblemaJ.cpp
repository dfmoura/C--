/*
Gauss - O segredo da agilidade na soma


- Gerar entrada de N para indicar o numero de testes para a soma.
- Gerar contador para os N teste.
- Realizar entrada G1 <= G2.
- Gerar contador de G1 até G2 de modo que o iterador acumule a soma do intervalo.
- Imprimir o somatório.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,i,g1=0,g2=0,x=0,y=0,u=0;
        
           
            cin>>N;
            for(int i =0;i<N;i++){
                cin>>g1>>g2;
                for (int i=g1;i <= g2;i++){
                    x+=i;
                }
                cout<<x<<endl;
                x=0;
            }
}
