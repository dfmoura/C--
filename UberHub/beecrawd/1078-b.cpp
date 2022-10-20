#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int N;
    cin >> N;
    int i = 0;
    while (i <= 10){
        if((2 < N)&&(N<1000)){
        cout << i <<" x "<<N<<" = "<< i*N << endl;
        }
    i++;
    }
}