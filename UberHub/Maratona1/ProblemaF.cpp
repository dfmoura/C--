/*
Bob
N número de casos, competições
Fatorial de K em até 3 colocações.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

int N,K,C=0,i,J=1,L=2;
cin >> N;

    while(cin>>K){
    i = 0;
    cout<<(K*(K-J)*(K-L))<<endl;
    C++;
    if(C==N){break;}
    }
}