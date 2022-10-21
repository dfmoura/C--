#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){

    int x, y,i, soma;
    cin >> x >> y;
    soma = 0;

    if (x<y){
        
        for ( i = x; i <= y; i++){
            if(i%13!=0){
                soma +=i;
            }
        }
    }else{
        for ( i = y; i <= x; i++){
            if(i%13!=0){
                soma+=i;
            }
        }
    }
    cout<< soma<< endl;

}