#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){



int i,x=0;
for (i = 100; i>0; i-=1){
    cout<< i<< endl;
    x++;
}
cout<<"Total de posicoes: "<<x<<endl;

cout<<"----------------"<<endl;

for (i = 100; i>0; i-=2){
    cout<< i<< endl;
    x++;
}
cout<<"Total de posicoes: "<<x<<endl;

cout<<"----------------"<<endl;

for (i = 100; i>=0; i-=2){
    cout<< i<< endl;
    x++;
}
cout<<"Total de posicoes: "<<x<<endl;



}
