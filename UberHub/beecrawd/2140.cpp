#include <bits/stdc++.h>
#include <math.h>
#include <ios>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){

    while(1)
    {
        int N, M, troco;
        cin >> N >> M;
        troco = M - N;
        int notas[]={2,5,10,20,50,10};
        bool possivel = false;

        if(N==0 && M==0){break;}
        

        for (int i = 0; i < 6; i++){
            for (int j=0; j < 6; j++){
                if(troco - notas[j] == notas[i]) {possivel = true;}
            }
        } 

        if (possivel){cout<<"possible"<<endl;}
        else{cout<<"impossible"<<endl;}
        
    }
    
}
