#include <bits/stdc++.h>
#include <math.h>
#include <ios>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){
    int x;
    double media, y=0,z=0;
    
    while (1){
        cin >> x;
        if (x>0){
            y+=x;
            z++;
        }else{
            break;
        }
    }
    media = y/z;
    cout<<setprecision(2)<<fixed<<media<<endl;



}