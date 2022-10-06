#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int ageDays, d, m, y;
    cin >> ageDays;
    y = ageDays / 365;
    m = (ageDays % 365)/30;
    d = (ageDays % 365) % 30;
    cout << y << " ano(s)\n" << m << " mes(es)\n" << d << " dia(s)\n" << endl;
}