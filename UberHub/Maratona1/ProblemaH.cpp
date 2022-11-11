/*
Game of Thrones
Permutação de N casos (lideres no campo de batalha)
K serão os casos a serem permutados.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	float E,G,paridade;
	cin >> E>>G;

	paridade = E/G;
	if(paridade>0.73){
		cout<<"GASOLINA"<<endl;
	}else{
		cout<<"ETANOL"<<endl;
	}
	
}