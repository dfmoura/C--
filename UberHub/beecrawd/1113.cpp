#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){
    int x,y;
    while (1){
        cin >> x;
        cin >> y;
        if (x>y){
            cout<<"Decrescente"<<endl;
        }else if(x<y){
            cout<<"Crescente"<<endl;
        }else if(x==y){
            break;
        }
    }
    



}