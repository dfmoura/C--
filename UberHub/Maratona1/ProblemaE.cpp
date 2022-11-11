/*
Carlos
Quais são os divisores de N?

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

int N,i;
cin >> N;

i = 0;
for (i = i+1; i <= N; i++){
if (N%i==0){cout<<i<<endl;}
}
}