/*Exercicio 1)
Faca um programa que leia 10 valores do teclado e mostre na tela os 
valores lidos (uma vez com FOR e outra com WHILE)
*/
# include <bits/stdc++.h>
using namespace std;

int main(){


    
    int i = 0;
    cout<<"Exercicio com while"<<endl;
    while(i<10){
        int x;
        cin>>x;
        cout<<"O valor digitado foi: "<< x <<endl;
        i++;
    }

    cout<<"Exercicio com for"<<endl;
    for(int i=0; i<10; i++){
        int x;
        cin>> x;
        cout<<"O valor digitado foi: "<< x << endl;
    }

}