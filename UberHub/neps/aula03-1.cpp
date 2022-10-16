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

    
    int i = 0;

    cout<<"Exercicio com while"<<endl;
    while(i<10){
        
        int soma = 0;
        int x;
        cin>>x;
        if(x%2==0){
            soma += x;
        }else{ 
        cout<<"O numero digita eh impar, entao : "<<x<<endl;
        i++;
    }}

/*
    cout<<"Exercicio com for"<<endl;
    for(int i=0; i<=10; i++){
        int x;
        cin>> x;
        cout<<"O valor digitado foi: "<< i<<endl;
    }
*/
}
