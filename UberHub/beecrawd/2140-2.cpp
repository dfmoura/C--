#include <bits/stdc++.h>
#include <math.h>
#include <ios>
#include <stdio.h>
#include <iostream>
#include <iomanip>


using namespace std;
int main(){

    int N,i=0,a=0,b=0; //saque disponibilizado
    cin >> N;
    
    a=N/100;
    if(a>0){b++;}
    N = N%100;
    a=N/50;
    if(a>0){b++;}
    N = N%50;
    a=N/20;
    if(a>0){b++;}
    N = N%20;
    a=N/10;
    if(a>0){b++;}
    N = N%10;
    a=N/5;
    if(a>0){b++;}
    N = N%5;   
    a=N/2;
    if(a>0){b++;}
    N = N%2;  
    cout<<b<<endl;
 
 
    
}
