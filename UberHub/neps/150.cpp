#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a>>b>>c;
    if ((a >= b) && (a>=c) && (a<=100) && (b<=1000) && (c<=1000)){
        cout << a << endl;
    }else if((b >= c) && (b>=a) && (a<=100) && (b<=1000) && (c<=1000)){
        cout << b << endl;
    }else if((c >= a) && (c>=b) && (a<=100) && (b<=1000) && (c<=1000)){
        cout << c << endl;
    }
}
