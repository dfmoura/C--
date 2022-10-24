#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    float c;
    cin >> a>>b;
    c = ((a*2)+(b*3))/5;

    if (c>=7){
        cout<<"Aprovado"<<endl;
    }else if (c<3){
        cout<<"Reprovado"<<endl;
    }else {
        cout<<"Final"<<endl;    
    }
}
