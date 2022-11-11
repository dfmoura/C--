/*
Game of Thrones
Permutação de N casos (lideres no campo de batalha)
K serão os casos a serem permutados para fatoração.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N,K,i,fatorial = 1,C = 0;
	cin >> N;
    while(cin>>K){
	for (i=1; i<=K; i++){fatorial*=i;C++;}
	cout<<fatorial<<endl;
    fatorial=1;
    C=0;
    N--;
    if(N==0){break;}
    }
}