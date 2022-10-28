#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
string soad[] = {
    "PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
     "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", 
     "WIFI ANTENNAS"
    };
int main()
{
    int c, x,y;
    cin >> c;
    while(c--){
        cin >> x >> y;
        cout<< soad[x+y]<< endl;
    }
}