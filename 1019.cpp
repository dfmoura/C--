#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int tsegundos, h, m, s, divResto;
    cin >> tsegundos;
    h = tsegundos / 3600;
    divResto = tsegundos % 3600;
    m = divResto / 60;
    s = divResto % 60;
    cout << h << ":" << m << ":" << s << endl;
}