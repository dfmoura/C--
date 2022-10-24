/*
Execicio 2)
Implemente nesse codigo um filtro que, a partir do valor digitado, 
checa se ele é par ou impar. Se for par, atualiza a variavel soma, 
senao, continua rodando normalmente. 
Note que: o programa nao para de rodar em momento algum.
*/
# include <bits/stdc++.h>
using namespace std;

int main(){

    int qtdDeNSomados = 0;
    int somawhile = 0;
    int somafor = 0;
    int i = 0;    
    cout<<"Exercicio com while"<<endl;
    while(i<10){
        int soma = 0;
        int x;
        cin>>x;
        if(x%2==0){
            somawhile += x;
            qtdDeNSomados++;
        }else{ 
            cout<<"O numero digita eh impar, entao ele nao foi somado"<<x<<endl;
        }
        i++;
    }
    cout << "A soma do While eh: " << somawhile << endl;
    cout << "Foram somados " << qtdDeNSomados << " no while" << endl;



    cout<<"\n\nExercicio com for"<<endl;

    qtdDeNSomados = 0;
    for(int i=0; i<10; i++){
        int x;
        cin>> x;
        if(x%2 ==0){
            somafor += x;
            qtdDeNSomados++;
        }else{
            cout<<"O numero digita eh impar, entao ele nao foi somado "<< i<<endl;
        }
        
    }
    cout << "A soma do FOR eh: "<< somafor << endl;
    cout << "Foram somados " << qtdDeNSomados << " no for" << endl;
}
