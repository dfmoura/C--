#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main(){
    
    int notas[]={2,5,10,20,50,100};

    int i=0;
    for (int i=0; i < 6; i++){
        //cout<<i<<endl;
        for (int j=0; j < 6; j++){
            //cout<<j<<endl;
            if(2-notas[j]==notas[i]){
                cout<<"tipos de notas para troco: "<<notas[j]<<endl;
            }
        }
    }
}