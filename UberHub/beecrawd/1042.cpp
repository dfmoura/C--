#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3, temp, orig1, orig2, orig3;
    cin >> num1, cin >> num2 , cin >> num3;
    orig1 = num1, orig2=num2, orig3=num3;

    if(num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout <<num1<<endl;
    cout <<num2<<endl;
    cout <<num3<<endl;

    cout <<endl;
    cout <<orig1<<endl;
    cout <<orig2<<endl;
    cout <<orig3<<endl;
}