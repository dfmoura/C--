#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(){
    double radius,volume, pi=3.14159;
    cin >> radius;
    volume = (4/3.0) * pi * (pow(radius,3));
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
}