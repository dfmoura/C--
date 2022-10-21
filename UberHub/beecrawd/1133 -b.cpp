#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){

    int x, y, i, z;
    cin >> x >> y;

    if (y<x){
        z=x;
        x=y;
        y=z;
    }

    for ( i = x+1; i < y; i++){
        if ((i%5==2)|(i%5==3)){
            cout<<i<<endl;
        }
    }
}


